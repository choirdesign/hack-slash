//BattleManager.isEnemyDeadフラグを監視している
//Destroyの前にフェードアウトさせたい → EnemyDestroyで実装
//ここから子オブジェクトのテキストにアクセスできるかな？

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


	void Start () {
		player = GameObject.FindWithTag ("Player"); //SendMessage用


		//自身のEnemyStatsから引数つきで実行されるように改良したい
		//敵プレハブの子のキャンバスを取得
		childCanvas = me.gameObject.transform.FindChild ("Canvas").gameObject;
		//キャンバスの子のテキストオブジェクトを取得
		childText = childCanvas.gameObject.transform.FindChild ("Text").gameObject;
		//さらにテキストオブジェクトからテキストコンポーネントを取得
		myName = childText.GetComponent<Text> ();

		Debug.Log (myName.text);
		//出力結果 = さだのぶ

	}

	//isDeadがtrueになったらplayerに知らせる
	//死んだらplayerにメッセージを送って消える
	void OnCollisionStay2D (Collision2D col){
		isDead = BattleManager.isEnemyDead;

		Debug.Log ("衝突中〜");//衝突中はUpdateみたいに走り続ける

		if (isDead) {
			player.SendMessage ("ExitBattle");
			//Destroy (gameObject);

		}
	}
		
}
