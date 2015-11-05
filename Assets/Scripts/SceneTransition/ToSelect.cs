//ステージ選択画面を呼び出す


using UnityEngine;
using System.Collections;

public class ToSelect : MonoBehaviour {

	void Awake() { 
		Application.targetFrameRate = 60; //60FPSに設定
	}


	public void OnPushButton() {
		Application.LoadLevel ("StageSelect");
	}


}
