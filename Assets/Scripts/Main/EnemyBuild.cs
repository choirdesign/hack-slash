//ステージごとにCSVを分けないといけないかんじ
//private TextAssetにして、StageBuild.currentStageの番号を元にRources.loadみたいなのでよびだす

using UnityEngine;
using System.Collections;

public class EnemyBuild : SingletonMonoBehaviour<EnemyBuild> {


	//敵の出現位置のCSV
	public TextAsset enemyLayout;

	//生成するオブジェクトの配列
	public GameObject[] enemies;
	private float spawnHeight = 1.71f; //敵が生成される高さ


	public  void Awake () {

		if (this != Instance) {
			Destroy (this);
			return;
		}
		DontDestroyOnLoad (this);
	}
		

	public void EnemySetUp() {
		//改行位置で区切る
		char[] kaigyou = { '\r', '\n' }; //どちらも改行文字

		//CSVの情報を1行ずつ要素にいれる
		string[] layoutInfo = enemyLayout.text.Split (kaigyou);
		Debug.Log (layoutInfo [0]);

		//１行の１文字ずついれる配列
		string[] eachInfo;

		for (int i = 2; i < layoutInfo.Length; i++) {
			//カンマで区切る
			eachInfo = layoutInfo [i].Split ("," [0]);
			Debug.Log (eachInfo [0]);


			int objNumber = getObj (eachInfo [0]);

			//#1 [objNumber]番目のオブジェクトを取得
			GameObject obj = enemies [objNumber];

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
		object go = Instantiate(obj,
			new Vector3 (pos.x, pos.y, 1),
			obj.transform.rotation) as GameObject;
	}

}
