//BattleManager.isEnemyDeadフラグを監視している
//自身のゲームオブジェクトのEnemyStatsを参照
//Destroyの前にフェードアウトさせたい → EnemyDestroyで実装
//Textに名前を表示
//eHpを元にHPゲージを更新

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class EnemyControl : MonoBehaviour {

	//死亡フラグ
	private bool isDead;
	//isDeadがtrueになったらplayerに知らせる
	private GameObject player;

	//子オブジェクトにアクセスしたい
	public GameObject me;
	private GameObject childCanvas;
	private GameObject childText;
	private Text myName;

	//自分自身のステータスが知りたい
	private EnemyStats enemyStats;

	//HPゲージ
	private GameObject childSlider;
	private Slider eHpGauge;

	void Start () {
		player = GameObject.FindWithTag ("Player"); //SendMessage用


		//敵プレハブの子のキャンバスを取得
		childCanvas = me.gameObject.transform.FindChild ("Canvas").gameObject;
		//キャンバスの子のテキストオブジェクトを取得
		childText = childCanvas.gameObject.transform.FindChild ("Text").gameObject;
		//さらにテキストオブジェクトからテキストコンポーネントを取得
		myName = childText.GetComponent<Text> ();

		enemyStats = this.gameObject.GetComponent<EnemyStats> ();
		//自分のテキストに名前を表示
		myName.text = enemyStats.eName;

		//HPゲージの最大値を敵のHPの最大値で初期化
		childSlider = childCanvas.gameObject.transform.FindChild ("Slider").gameObject;
		eHpGauge = childSlider.GetComponent<Slider> ();
		eHpGauge.maxValue = enemyStats.eHp;
	}

	void Update () {
		//現在のHPでゲージを更新
		eHpGauge.value = enemyStats.eHp;
	}



	//isDeadがtrueになったらplayerに知らせる
	//死んだらplayerにメッセージを送って消える
	void OnCollisionStay2D (Collision2D col){
		//死んでないか確認　
		isDead = BattleManager.isEnemyDead;

		Debug.Log ("EnemyControlにて衝突検知中");//衝突中はUpdateみたいに走り続ける

		if (isDead) {
			player.SendMessage ("ExitBattle");
			//Destroy (gameObject);

		}


		StartCoroutine ("TestAct", enemyStats.eSpd);

	}

	private IEnumerator TestAct (float speed) {

	}



		
}
