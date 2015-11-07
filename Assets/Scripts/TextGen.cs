//シーン上のEDamageTextGenにアタッチ
//

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class TextGen : MonoBehaviour {

	//プレイヤーの攻撃時にテキストを表示させるメソッドを走らせる
	//仮に敵に通るダメージを100とした時
	//このスクリプトに100という値を知らせる

	//var pos = this.PopupPosition;としてポップアップする位置を設定
	public Vector3 PopupPosition; // ポップアップする位置

	//var obj = new GameObject;としてinstantiateするゲームオブジェクトを生成

	//objの親をSetParentでTargetCanvasに設定
	public GameObject TargetCanvas; // ダメージを出力するキャンバス

	//obj.transform.position = pos;として生成する位置を決定 ?posはinstantiateする時に使うのでは


	//obj PopupTextObjectとして Prefabのダメージテキストプレハブを生成
	public GameObject PopupTextObject; // ポップアップするテキストオブジェクト NumberTextScript付き
	//Text型の一時変数(仮にdTextとする)にPopupTextObject.GetComponent<Text>();
	//画面に表示するにはdText.text = public string PopupString;

	//PopupStringに敵に与えたダメージをToStringして代入

	//表示に成功したら、テキストがアニメーションする
	//アニメーションが終わったらIsFinishフラグがtrueになる


	public string PopupString; // 表示する文字

	void Start () {


		StartCoroutine ("PopUp");


	}


	private IEnumerator PopUp (){

		for (int i = 1;  i < 10; i++) {

		var pos = this.PopupPosition;

			PopupPosition = new Vector3 (Random.Range(0,10), Random.Range(0,10), 1);


		Text dText = PopupTextObject.GetComponent<Text> ();
		dText.text = "テキストだよー";

		var valueText = (GameObject)Instantiate (this.PopupTextObject, pos, Quaternion.identity);

		yield return new WaitForSeconds (1.0f);
		}
	}





}