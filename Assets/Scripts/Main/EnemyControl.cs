//BattleManager.isEnemyDeadフラグを監視している
//Destroyの前にフェードアウトさせたい → EnemyDestroyで実装
//敵の名前を表示　HPのゲージ反映をここでするか、別のクラスにさせるか・・・

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


	void Start () {
		player = GameObject.FindWithTag ("Player"); //SendMessage用


		//自身のEnemyStatsから引数つきで実行されるように改良したい
		//敵プレハブの子のキャンバスを取得
		childCanvas = me.gameObject.transform.FindChild ("Canvas").gameObject;
		//キャンバスの子のテキストオブジェクトを取得
		childText = childCanvas.gameObject.transform.FindChild ("Text").gameObject;
		//さらにテキストオブジェクトからテキストコンポーネントを取得
		myName = childText.GetComponent<Text> ();

		enemyStats = this.gameObject.GetComponent<EnemyStats> ();

		myName.text = enemyStats.eName;





	}

	//isDeadがtrueになったらplayerに知らせる
	//死んだらplayerにメッセージを送って消える
	void OnCollisionStay2D (Collision2D col){
		//死んでないか確認　
		isDead = BattleManager.isEnemyDead;

		if (!isDead) {

		}


		Debug.Log ("衝突中〜");//衝突中はUpdateみたいに走り続ける

		if (isDead) {
			player.SendMessage ("ExitBattle");
			//Destroy (gameObject);

		}
	}
		
}
