//BattleManager.isEnemyDeadフラグを監視している

//Destroyの前にフェードアウトさせたい

using UnityEngine;
using System.Collections;

public class EnemyControl : MonoBehaviour {

	//死亡フラグ
	private bool isDead;

	//isDeadがtrueになったらplayerに知らせる
	private GameObject player;

	void Start () {
		player = GameObject.FindWithTag ("Player");
	}

	//isDeadがtrueになったらplayerに知らせる


	//死んだらplayerにメッセージを送って消える
	void OnCollisionStay2D (Collision2D col){
		isDead = BattleManager.isEnemyDead;

		if (isDead) {
			player.SendMessage ("ExitBattle");
			//Destroy (gameObject);

		}
	}
		
}
