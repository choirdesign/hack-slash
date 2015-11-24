//シーン上のEDamageTextGenにアタッチ
//テキストの生成から破棄まで
//生成された文字は生成されたらすぐにCanvasの子になっている
//文字はポップアニメーションの後に

//自分へのダメージもここで処理するかー

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class EDamageTextGen : MonoBehaviour {

	//obj PopupTextObjectとして Prefabのダメージテキストプレハブを生成
	public GameObject PopupTextObject; // ポップアップするテキストオブジェクト
	public Vector3 PopupPosition; // ポップアップする位置
	public string PopupString; // 表示する文字 (あれ？いらない？

	private int eDamage;
	private bool eIsHit;
	private int eHeal;

	private int pDamage;
	private bool pIsHit;
	private int pHeal;

	//敵のダメージ
	public void EDTGen (int sendDamage, bool isHit) {
		eDamage = sendDamage;
		eIsHit = isHit;
		StartCoroutine("Erasure");
	}

	//敵が回復
	public void EHTGen (int sendHeal) {
		eHeal = sendHeal;
		StartCoroutine("HErasure");
	}

	private IEnumerator HErasure () {

		PopupPosition = new Vector3 (Random.Range(30,130), Random.Range(-30,60), 1);
		var pos = this.PopupPosition;

		Text dText = PopupTextObject.GetComponent<Text> ();


		dText.text = eHeal.ToString ();
		dText.color = new Color (0, 12, 0);
		
		var valueText = (GameObject)Instantiate (this.PopupTextObject, pos, Quaternion.identity);

		yield return new WaitForSeconds (0.5f);
		Destroy (valueText);
	}

	private IEnumerator Erasure () {

		PopupPosition = new Vector3 (Random.Range(30,130), Random.Range(-30,60), 1);
		var pos = this.PopupPosition;

		Text dText = PopupTextObject.GetComponent<Text> ();

		if (eIsHit) {
			dText.text = eDamage.ToString ();
			dText.color = new Color (255, 255, 255);
		} else if (!eIsHit) {
			dText.text = "miss!";
			dText.color = new Color (0, 100, 250);
		}


		var valueText = (GameObject)Instantiate (this.PopupTextObject, pos, Quaternion.identity);

		yield return new WaitForSeconds (0.5f);
		Destroy (valueText);
	}



	//プレイヤーのダメージ
	public void PDTGen (int sendDamage, bool isHit) {
		pIsHit = isHit;
		pDamage = sendDamage;
		StartCoroutine("PErasure");
	}

	//プレイヤーが回復
	public void PHTGen (int sendHeal) {
		pHeal = sendHeal;
		StartCoroutine("PHErasure");
	}

	private IEnumerator PHErasure () {

		PopupPosition = new Vector3 (-50, 50, 1);
		var pos = this.PopupPosition;

		Text dText = PopupTextObject.GetComponent<Text> ();


		dText.text = pHeal.ToString ();
		dText.color = new Color (0, 12, 0);

		var valueText = (GameObject)Instantiate (this.PopupTextObject, pos, Quaternion.identity);

		yield return new WaitForSeconds (0.5f);
		Destroy (valueText);
	}


	private IEnumerator PErasure () {

		PopupPosition = new Vector3 (-50, 50, 1);
		var pos = this.PopupPosition;

		Text dText = PopupTextObject.GetComponent<Text> ();

		if (pIsHit) {
			dText.text = pDamage.ToString ();
			dText.color = new Color (255, 255, 255);
		} else if (!pIsHit) {
			dText.text = "miss!";
			dText.color = new Color (0, 100, 250);
		}

		var valueText = (GameObject)Instantiate (this.PopupTextObject, pos, Quaternion.identity);

		yield return new WaitForSeconds (0.5f);
		Destroy (valueText);
	}





}
