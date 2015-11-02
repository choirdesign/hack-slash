//BattleManagerにアタッチ
//戦闘開始から終了までを管理する
//


//必要な処理
//BattleStateBegin バトル状態に入る ボタンを有効にする
//SetParam
//PlayerAtk ボタンを押したときに走る処理 攻撃モーション 
//EnemyAtk speedを参照してUpdateで実行
//isDead hpが0で オブジェクトを破棄 enemyならオブジェクト破棄 playerなら負けモーション
//BattleStateEnd playerのcollisionが無効になったら 移動を再開 ボタンを無効にする (上から透明な画像を貼っておく？

//必要な情報
//接触している敵の情報
//プレイヤー アニメーションの遷移

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class BattleManager : MonoBehaviour {

	public static bool isBattle; //Encounterが切り替える
	public Image buttonCover;

	public GameObject player;

	public static bool isEnemyDead = false;

	void Start () {
		isBattle = false;
	}

	void Update () {
		isButtonEnabled ();

	}

	void isButtonEnabled () {
		if (isBattle) {
			buttonCover.enabled = false;
		} else {
			buttonCover.enabled = true;
		}
	}


	public void PlayerAtk() {
		Debug.Log ("PlayerAtk");
		//col = player.GetComponent<Collider2D> ();

		isEnemyDead = true;
		
	}
		



}
