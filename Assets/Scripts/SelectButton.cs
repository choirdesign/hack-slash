//ボタンタグを識別してStageBuilderに情報を送る
//遷移先の画面でBuilderがステージを生成する
using UnityEngine;
using System.Collections;

public class SelectButton : MonoBehaviour {

	private string buttonTag;
	public static int tagNum;
	//public StageBuilder stageBuilder;

	void Start () {


	}

	//ボタンを押した時
	public void SendStageTag () {
		buttonTag = this.gameObject.tag;
		string s = buttonTag.Substring (5); //Stage 1←この文字を取得
		tagNum = int.Parse (s);				//文字から数字に変換

		StageBuild.currentStage = tagNum; //ここで初期化


		Application.LoadLevel ("Stage");
	}


}
