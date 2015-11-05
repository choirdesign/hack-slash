/*
一気に透明化できるようにRootとなるGameObject+Canvas Groupの作成(破棄するのも簡単だしね)
一定時間ごとに1文字ずつTextオブジェクトを生成する
アニメーション終了チェック
Canvas GroupのAlpha値を変えながらフェードアウト処理
自分自身の破棄
*/



using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class PopupDamageGen : MonoBehaviour {


	// 出力先キャンバス
	public GameObject TargetCanvas;

	// 表示する文字
	public string PopupString;

	// ポップアップするテキストオブジェクト
	// NumberTextScript付き
	public GameObject PopupTextObject;

	/// ポップアップする位置
	public Vector3 PopupPosition;

	// 1文字の幅
	public float PopupTextWidth;

	// ポップアップの実行
	public void Popup()
	{
		StartCoroutine (Execute());
	}
		
	// ポップアップ実行
	private IEnumerator Execute()
	{
		var pos = this.PopupPosition;						//一時変数posにPopupPosiotionを代入
		var texts = new List<EnemyDamageText> ();			//一時変数textsをList<EnemyDamageText>で初期化

		var root = new GameObject ();							//一時変数rootにGameObjectの配列を作成
		var canvasGroup = root.AddComponent<CanvasGroup> ();	//一時変数canvasGroupにroot(<CanvasGroup>をAddComponentしたもの)を代入
		root.transform.SetParent (this.TargetCanvas.transform); //rootの親にTargetCanvasを指定する

		foreach (var s in this.PopupString) {					//PopupStringに一回ずつ実行
			var obj = new GameObject ();						//一時変数objにgameObject()で初期化
			obj.transform.position = pos;						//objのpositionにposを代入
			obj.transform.SetParent (root.transform);			//TargetCanvasの親に設定したrootの子にobjを設定する

			// 1文字ずつ生成
			var valueText = (GameObject)Instantiate (this.PopupTextObject, pos, Quaternion.identity);
			var textComp = valueText.GetComponent<Text> ();							//生成したvalueTextのTextコンポーネントを取得
			textComp.text = s.ToString ();											//s番目の数字を文字に変換
			valueText.transform.SetParent (obj.transform);
			texts.Add( valueText.GetComponent<EnemyDamageText>() );

			// 0.03秒待つ(適当)
			yield return new WaitForSeconds (0.03f);

			// 次の位置
			pos.x += this.PopupTextWidth;											//2文字目に以降？
		}

		// 適当に待ち
		while (!texts.TrueForAll( t => t.IsFinish )) { //TrueForAllはtexts内全ての要素がt => t.IsFinishかどうか調べる
			yield return new WaitForSeconds (0.1f);
		}

		// フェードアウト
		for (int n=9; n>=0; n--) {
			canvasGroup.alpha = n / 10.0f;
			yield return new WaitForSeconds (0.01f);
		}

		// 破棄
		Destroy (root);
		Destroy (gameObject);
	}
}