//BattleManager.isEnemyDeadフラグを監視している
//自身のゲームオブジェクトのEnemyStatsを参照
//Destroyの前にフェードアウトさせたい → EnemyDestroyで実装
//Textに名前を表示
//eHpを元にHPゲージを更新

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class EnemyControl : MonoBehaviour {

	//敵の死亡フラグ
	private bool isDead;
	//isDeadがtrueになったらplayerに知らせる
	//攻撃時、プレイヤーのステイタスに干渉する
	private GameObject player;
	private PlayerControl pstats;


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

	//攻撃時に動かしたい
	private Transform meTrans;


	void Start () {
		player = GameObject.FindWithTag ("Player"); //SendMessageにも使用
		pstats = player.GetComponent<PlayerControl>(); //ステータスを参照


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

		meTrans = me.GetComponent<Transform> ();


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



	}

	void OnCollisionEnter2D (Collision2D col){
			StartCoroutine ("TestAct", enemyStats.eSpd);
	}


	private IEnumerator TestAct (float speed) {

		while (!isDead) {
			if (isDead) {
				break;
			}

			yield return new WaitForSeconds (speed - 0.2f);//speed

			if (!isDead) {
			Vector3 pos = meTrans.position;
			pos.x -= 1;
			meTrans.position = pos;

			pstats.PlayerDamage (3);
			yield return new WaitForSeconds (0.2f);
			pos.x += 1;
			meTrans.position = pos;

			Debug.Log ("ぐわー");
			}
		}

	}



		
}
