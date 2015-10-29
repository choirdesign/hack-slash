//プレイヤーにアタッチ
//敵に遭遇した時の処理
//BattleManagerと連携
//PlayerControlのmoveSpeedを参照している

using UnityEngine;
using System.Collections;

public class Encounter : MonoBehaviour {

	void OnTriggerEnter2D(Collider2D col) {
		Debug.Log ("encounter");
		PlayerControl.moveSpeed = 0.02f;	//通常時は0.1f
		this.GetComponent<Animator> ().SetBool ("encount", true);
	}

	void OnCollisionEnter2D(Collision2D col) {
		PlayerControl.moveSpeed = 0.0f;
		this.GetComponent<Animator> ().SetBool ("encount", false);
		this.GetComponent<Animator> ().SetBool ("enterBattle", true);
		Debug.Log ("enter battle");

		//BattleManagerに知らせる
		BattleManager.isBattle = true;
	}
		
	void ExitBattle () {
	
		//workアニメーションに戻す
		this.GetComponent<Animator> ().SetBool ("encount", false);
		this.GetComponent<Animator> ().SetBool ("enterBattle", false);

		//勝利アニメーションに切り替え
		this.GetComponent<Animator> ().SetBool ("playerWin", true);
		StartCoroutine("Anim");

		Debug.Log ("exit battle");

		//BattleManagerに知らせる
		BattleManager.isBattle = false;
	}


	//勝利時アニメーション
	private IEnumerator Anim () {
		yield return new WaitForSeconds (2.5f);
		this.GetComponent<Animator> ().SetBool ("playerWin", false);
		PlayerControl.moveSpeed = 0.1f;
	}


}
