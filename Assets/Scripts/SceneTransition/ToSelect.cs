//ステージ選択画面を呼び出す


using UnityEngine;
using System.Collections;

public class ToSelect : MonoBehaviour {

	public void OnPushButton() {
		Application.LoadLevel ("StageSelect");
	}
}
