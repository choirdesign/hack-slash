//敵ダメージテキストのプレハブにアタッチ
//ダメージ表示が終了したらOnAnimationFinish()がアニメーションのイベントから呼ばれる
using UnityEngine;
using System.Collections;

public class EDamageTextAnimFinish : MonoBehaviour {

	public bool IsFinish = false;
	public GameObject text;
	private Transform tTrans;

	void Start () {
		tTrans = text.GetComponent<Transform> ();
	}

	void Update () {
	

		Vector3 pos = tTrans.position;
		pos.y += 0.01f;
		tTrans.position = pos;

	}

	public void OnAnimationFinish()
	{
		//これがtrueになったらテキストオブジェクトをDestroyするようにすればいいのかな？

		this.IsFinish = true;
	}
}
