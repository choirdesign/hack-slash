//戻るボタンにアタッチ

using UnityEngine;
using System.Collections;

public class OnPushReturn : MonoBehaviour {

	[SerializeField]
	private Canvas pauseCanvas;
	
	public void OnPushButton () {
		PlayerControl.pauseFlg = false;
		Time.timeScale = 1f;
		pauseCanvas.GetComponent<Canvas> ().enabled = false;
	}
}
