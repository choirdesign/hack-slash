//ポーズボタンにアタッチ
//ポーズ中の処理を制御する 必要なコンポーネント：プレイヤーの動きを止める、PauseMenuCanvasに命令を送る、

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class OnPushPause : MonoBehaviour {

	[SerializeField]
	private Canvas pauseCanvas;

	void Start() {
		pauseCanvas.GetComponent<Canvas> ().enabled = false;
	}

	public void OnPushButton() {
		PlayerControl.pauseFlg = true; //playerのUpdateを止める
		Time.timeScale = 0f;
		//Pauser.Pause (); //バグがでる
		pauseCanvas.GetComponent<Canvas> ().enabled = true;
	}
}
