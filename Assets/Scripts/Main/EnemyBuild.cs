//ステージごとにCSVを分けないといけないかんじ
//private TextAssetにして、StageBuild.currentStageの番号を元にRources.loadみたいなのでよびだす

using UnityEngine;
using System.Collections;

public class EnemyBuild : SingletonMonoBehaviour<EnemyBuild> {


	//敵の出現位置のCSV
	private TextAsset enemyLayout;

	//敵全ての情報が入っているCSV
	private TextAsset enemyInfo;
	//1行ごとに格納　どこからでも呼び出せるように
	public static string[] enemyEachLine;

	//生成するオブジェクトの配列
	public GameObject[] enemies;
	private float spawnHeight = 1.71f; //敵が生成される高さ

	//instantiateしたオブジェクトに情報を渡したい
	private int objNum;


	public  void Awake () {

		if (this != Instance) {
			Destroy (this);
			return;
		}
		DontDestroyOnLoad (this);

		Object eiText;
		eiText = Resources.Load ("CSV/EnemyInfo");
		enemyInfo = eiText as TextAsset;
		char[] kaigyou = { '\r', '\n' };
		enemyEachLine = enemyInfo.text.Split (kaigyou);
		Debug.Log (enemyEachLine [3]);

	}







		
	//カメラのStageManagerCollに呼ばれる
	public void EnemySetUp() {

		//CSV(Object型)を読み込んでTextAsset型にキャスト
		Object elText;
		elText = Resources.Load ("CSV/Enemies_Stage" + StageBuild.currentStage);
		enemyLayout = elText as TextAsset;

		//改行位置で区切る
		char[] kaigyou = { '\r', '\n' }; //どちらも改行文字

		//CSVの情報を1行ずつ要素にいれる
		string[] layoutInfo = enemyLayout.text.Split (kaigyou);
		Debug.Log (layoutInfo [0]);

		//１行の１文字ずついれる配列
		string[] eachInfo;

		//3行目から読み始める
		for (int i = 2; i < layoutInfo.Length; i++) {
			//カンマで区切る
			eachInfo = layoutInfo [i].Split ("," [0]);
			Debug.Log (eachInfo [0]);


			objNum = getObj (eachInfo [0]);

			//#1 [objNumber]番目のオブジェクトを取得
			GameObject obj = enemies [objNum];

			//#2 2文字目[1]をx座標、3文字目[2]をy座標に設定(Parse()で文字列を整数値に)する
			Vector2 pos = new Vector2 (float.Parse (eachInfo [1]),
				spawnHeight);

			//#1で設定した種類のオブジェクトを#2で得た座標に生成する
			this.createObj (obj, pos);

		}
	}

	//取り出した文字(数字)を数字にして返す
	int getObj(string objType)
	{
		int resultNum;
		resultNum = int.Parse (objType);
		return resultNum;
	}

	//GameObjectと位置（z座標除く）を引数として渡し、その位置にGameObjectを生成。
	void createObj(GameObject obj, Vector2 pos)
	{
		GameObject enemy = Instantiate(obj,
			new Vector3 (pos.x, pos.y, 1),
			obj.transform.rotation) as GameObject;

		//生成したオブジェクトに
		EnemyStats es = enemy.GetComponent<EnemyStats> ();
	
		es.EnemyInit (objNum + 2); //最初の2行が説明文のため

	}

}
