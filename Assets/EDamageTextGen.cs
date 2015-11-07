//シーン上のEDamageTextGenにアタッチ
//テキストの生成から破棄まで
//生成された文字は生成されたらすぐにCanvasの子になっている
//文字はポップアニメーションの後に

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class EDamageTextGen : MonoBehaviour {

	EDamageTextAnimFinish edtafinish;//通知　（あれ？こっち？


	//obj PopupTextObjectとして Prefabのダメージテキストプレハブを生成
	public GameObject PopupTextObject; // ポップアップするテキストオブジェクト
	public Vector3 PopupPosition; // ポップアップする位置
	public string PopupString; // 表示する文字 (あれ？いらない？

	private int damage;


	public void EDTGen (int sendDamage) {
	
		damage = sendDamage;
		StartCoroutine("Erasure");

	}


	private IEnumerator Erasure () {

		PopupPosition = new Vector3 (Random.Range(30,130), Random.Range(-30,60), 1);
		var pos = this.PopupPosition;


		Text dText = PopupTextObject.GetComponent<Text> ();
		dText.text = damage.ToString ();
		//dText.text = "0123456789";
		var valueText = (GameObject)Instantiate (this.PopupTextObject, pos, Quaternion.identity);

		yield return new WaitForSeconds (0.5f);

		Destroy (valueText);
	}



}
