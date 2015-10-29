using UnityEngine;
using System.Collections;

public class OnPushQuit : MonoBehaviour {

	public void OnPushButton(){
		Time.timeScale = 1f;
		PlayerControl.pauseFlg = false;
		FadeManager.Instance.LoadLevel ("StageSelect", 1.0f);
	}

}
