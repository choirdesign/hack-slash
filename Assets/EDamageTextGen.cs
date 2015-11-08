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

	private int pDamage;



	//敵のダメージ
	public void EDTGen (int sendDamage, bool isHit) {
		eDamage = sendDamage;
		eIsHit = isHit;
		StartCoroutine("Erasure");
	}

	private IEnumerator Erasure () {

		PopupPosition = new Vector3 (Random.Range(30,130), Random.Range(-30,60), 1);
		var pos = this.PopupPosition;

		Text dText = PopupTextObject.GetComponent<Text> ();

		if (eIsHit) {
			dText.text = eDamage.ToString ();
		} else if (!eIsHit) {
			dText.text = "miss!";
		}


		var valueText = (GameObject)Instantiate (this.PopupTextObject, pos, Quaternion.identity);

		yield return new WaitForSeconds (0.5f);
		Destroy (valueText);
	}



	//プレイヤーのダメージ
	public void PDTGen (int sendDamage) {
		pDamage = sendDamage;
		StartCoroutine("PErasure");
	}

	private IEnumerator PErasure () {

		PopupPosition = new Vector3 (-50, 50, 1);
		var pos = this.PopupPosition;

		Text dText = PopupTextObject.GetComponent<Text> ();
		dText.text = pDamage.ToString ();
	
		var valueText = (GameObject)Instantiate (this.PopupTextObject, pos, Quaternion.identity);

		yield return new WaitForSeconds (0.5f);
		Destroy (valueText);
	}





}
