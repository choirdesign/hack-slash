//画面のフェードアウト・フェーインを制御するクラス
//FadeManagerオブジェクトは遷移時に破棄されない
//シングルトンなので一つだけ

using UnityEngine;
using System.Collections;


public class FadeManager : SingletonMonoBehaviour<FadeManager>
{
	//暗転用黒テクスチャ
	private Texture2D blackTexture;
	//フェード中の透明度
	private float fadeAlpha = 0;
	//フェード中かどうか
	private bool isFading = false;

	public void Awake () {
		//１つだけ
		if (this != Instance) {
			Destroy (this);
			return;
		}

		DontDestroyOnLoad (this.gameObject);

		//ここで黒テクスチャを作っておく
		this.blackTexture = new Texture2D (32, 32, TextureFormat.RGB24, false);
		this.blackTexture.ReadPixels (new Rect (0, 0, 32, 32), 0, 0, false);
		this.blackTexture.SetPixel (0, 0, Color.white);
		this.blackTexture.Apply ();
	}

	//OnGUIはUpdateのように常に呼び出される
	public void OnGUI () {
		if (!this.isFading)
			return;
		//透明度を更新して黒テクスチャを描画
		GUI.color = new Color (0, 0, 0, this.fadeAlpha);
		GUI.DrawTexture (new Rect (0, 0, Screen.width, Screen.height), this.blackTexture);
	}


	//他のクラスから呼ぶメソッド シーン名、暗転にかかる時間
	public void LoadLevel(string scene, float interval)
	{
		StartCoroutine (TransScene (scene, interval));
	}

	//遷移用コルーチン
	private IEnumerator TransScene (string scene, float interval) {
		//だんだん暗くなる
		this.isFading = true;
		float time = 0;
		while (time <= interval) {
			this.fadeAlpha = Mathf.Lerp (0f, 1f, time / interval);      
			time += Time.deltaTime;
			yield return 0;
		}

		//シーン切替
		Application.LoadLevel (scene);

		//だんだん明るくなる
		time = 0;
		while (time <= interval) {
			this.fadeAlpha = Mathf.Lerp (1f, 0f, time / interval);
			time += Time.deltaTime;
			yield return 0;
		}

		this.isFading = false;
	}

}

