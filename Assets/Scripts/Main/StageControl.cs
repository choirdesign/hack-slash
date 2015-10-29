//画面の更新をコントロールする
//テキストの更新
//ポーズボタンの挙動もここで制御する？　ポーズはいろいろありそうだからわけたほうがいいかも
//侵略度100%時の制御

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class StageControl : MonoBehaviour {

	public Text rateText; //侵略度のテキスト
	public int rate = 0; //侵略度初期値  他のクラスから見えるようにpublicにしとく
	public int rateUpPos = 1; //侵略度更新用

	//座標を監視する
	public GameObject player;
	private Transform playerTrans;

	public GameObject mainCamera; //ゴール処理用

	public Text clearText;		  //ゴール時のテキスト

	void Start () {
		playerTrans = player.GetComponent<Transform> ();
		rateText.text = "侵略度:0%";
	}
	
	// Update is called once per frame
	void Update () {

		//侵略度の更新
		if(playerTrans.position.x >= rateUpPos) {
			RateUpdate ();
		}

		//侵略度105までのあいだ、カメラが追跡する
		if (rateUpPos <= 105) {
			mainCamera.SendMessage ("Advancing");
		}

		//ステージクリア時の演出
		if (rateUpPos > 100) {
			clearText.text = ("侵略完了！");
			clearText.canvasRenderer.SetAlpha (1f); //テキストの透明度
		}

		//プレイヤーが画面外に消えて少ししたらフェードアウトしてシーン切り替え
		if (rateUpPos == 110) {
			FadeManager.Instance.LoadLevel ("StageSelect", 1.0f);
		}
			
	}

	//100%になるまで侵略度を更新
	void RateUpdate () {
		if (rate < 100) {
			rateUpPos += 1;
			rate += 1;
			rateText.text = "侵略度:" + rate.ToString () + "%";
		} else if (rate >= 100) {
			rateUpPos += 1;
		}


	}

}
