//ステージの最初と最後に表示されるテキスト
//最後に表示する処理はStageControlが行う

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ClearText : MonoBehaviour {

	public Text clearText;
	private float currentRemainTime = 1.0f;
	private bool startHidden = false;


	void Start () {

		clearText = GetComponent<Text> ();
		clearText.text = ("侵略開始！");

		StartCoroutine (OnStateHidden ());
	}


	void Update () {

		if (startHidden) {
			//フェードアウト
			currentRemainTime -= Time.deltaTime / 2;
			clearText.canvasRenderer.SetAlpha (currentRemainTime);
		}
	}


	//フラグをたてる
	IEnumerator OnStateHidden() {
		yield return new WaitForSeconds (1.0f);
		startHidden = true;

		}
		





}
