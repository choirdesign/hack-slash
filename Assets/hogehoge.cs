//エネミーの状態遷移
//なんかのマネージャクラスにCSVをまるっとhoge配列に1行ずつ保存して、(ID)に対応する行番号で取り出す どっかのマネジャーにあった敵の配列番号に対応させる
//↑このクラスでよくない？ いや、そしたら敵全員がCSVを読み込むのでやっぱダメ
//つまりこのクラスの目的は、ステータスを別クラスのhoge配列から読んで初期化すること？
//つまりIDは不要？一応書いとくかぁ

//HPバーと実際のHPを同期させる処理は長そうなので別のスクリプトに切り離すのが良さそう


//このスクリプトをGetComponentで取り出すようにすれば！ステータスの変数はprivateでいいか？？？publicじゃ無いとダメ？

using UnityEngine;
using System.Collections;

//行動パターンも敵情報と同じように最初に配列にしまっておくのが良いかと

public class hogehoge : MonoBehaviour {
	//敵のステータス、行動パターンを記したCSVがあってー
	//ID(配列の番号と対応),名前,HP,ATK,DEF,SPD,XP(戦闘終了時にプレイヤーに付与),行動,行動,行動,行動,行動
	//スライムの場合
	//0,スライム,50,10,1,3,100,punch,punch,punch,guard,punch;

	/*





	//別のクラスからステータスを参照するはずだから、ステータスの変数はstaticかなぁ　いや、publicだけでいいか？

	//Bクラスのメソッド
	//これはBクラスで宣言
	private TextAsset enemyInfoCSV;
	string[] enemyInfo;
	//これはBクラスのメソッド ステージを展開する時に呼ぶ
	void Awake () {
		//CSVを読み込む処理
		//enemyInfoに1行ずつ格納する処理
	}

	//これはBクラスのメソッド Aクラスから実行
	public string EnemyeachInfo(int enemyID){
		//配列の要素番号を引数にして
		//return enemyInfo[enemyID]; [enemyID]番目の1行を返す
	}


//------------------------------------------------------------------------------------//


	//Aクラスのメンバ
	private string name;
	private int eHp;
	private int eAtk;
	private int eDef;
	private int eSpd;
	private int exp;
	private string[] enemy

	//Aクラスのメソッド
	//instantiateされた時点でenemyInfoからの情報は入っているものとする
	void Start() {
		//
		//0,スライム,50,10,1,3,100,punch,punch,punch,guard,punch;この情報を持っている

		//enemyEachInfo[]に各情報を格納
	
		//とりあえず行動パターン以外のステータスで初期化するか
		//this.name = enemyEachInfo[1];
		//名前textをenemyEachInfo[1]の情報で更新する

		//this.eAtk = enemyEachInfo[2];//int型にする
		//this.eDef = enemyEachInfo[3];//int型にする
		//this.eSpd = enemyEachInfo[4];//int型にする
		//this.exp  = enemyEachInfo[5];//intに
		//this.actInfo[] = enemyEachInfo[6,7,8,9,10];



	}

	IEnumerator enemuyAct (eAtk) {

	}

	IEnumerator enemyBuff () {

	}wsw


	//これはAクラスのメソッド ステータスを割りあてる
	void enemyParamSetUp () {
	
		//Bクラスのメソッドを実行 

	}


	//-------------------------------------------------------------------------//
	//EnemyManagerのinstantiateするクラスに情報を渡せたらいいなー
	//instantiateしたオブジェクトにアタッチされているスクリプトに情報を渡す方法があるらしい


	//instantiateする時に EnemyeachInfo(0);//スライムの行を取り出す 
	//string型変数に取り出した時点での情報 0,スライム,50,10,1,3,100,punch,punch,punch,guard,punch;




	//行動メソッドはEnemyControlクラスで呼ぼー
	//コリジョンがstayの時に攻撃させたいから、EnemyControlクラスに行動メソッドを記述したほうがいいかなぁ
	//OnCollisionStay2Dは衝突している間ずっと繰り返されるかどうか、debuglogとかで検証しないと
	//結論：衝突中はUpdateみたいに呼ばれ続ける

	*/
}
