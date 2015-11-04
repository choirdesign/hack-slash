﻿//Stage開始時にプレイヤーのステータスを初期化する
//Stageでのプレイヤーの挙動を制御する
//侵略度が100になったら勝利アニメーションに切り替え
//ポーズボタンが押下された時のフラグ

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PlayerControl : MonoBehaviour {

	private Vector3 pos;

	//侵略度を参照する
	public GameObject mainCamera;
	private StageControl stageControl;
	public static float moveSpeed = 0.1f;

	//ポーズ用
	public static bool pauseFlg = false;

	//衝突した敵の情報
	public EnemyStats eStats;

	//PlayerStatsのステータスを格納する
	public int pHp;
	public int pAtk;
	public int pDef;
	public int pAgl;
	public int pHeal;

	//
	private GameObject pHpGauge;
	private Slider pHpSlider;

	void Start () {
		Debug.Log ("start");
		moveSpeed = 0.1f;
		pos = transform.localPosition;
		stageControl = mainCamera.GetComponent<StageControl> ();

		//ステージクリアまで代入
		pHp   = PlayerStats.hitpoint;
		pAtk  = PlayerStats.attack;
		pDef  = PlayerStats.deffence;
		pAgl  = PlayerStats.agility;
		pHeal = PlayerStats.heal;

		pHpSlider = GameObject.Find ("PlayerHPGauge").GetComponent<Slider> ();

		pHpSlider.maxValue = pHp;


	}
	
	// Update is called once per frame
	void Update () {
		bool battle;
		battle = BattleManager.isBattle;

		//falseの間すすむ
		if (!pauseFlg || battle) {
			transform.localPosition = pos;
			pos.x += moveSpeed;

			if (stageControl.rate == 100) {
				ChangeAnimWin ();
			} 
		}

	
		//現在のHPでゲージを更新
		pHpSlider.value = pHp;




	}

	//攻撃アニメーションを表示
	public void ChangeAnimAtk () {
		StartCoroutine ("Anim");
	}

	private IEnumerator Anim () {
		this.GetComponent<Animator> ().SetBool ("playerAtk", true);
		yield return new WaitForSeconds (0.02f);
		this.GetComponent<Animator> ().SetBool ("playerAtk", false);

	}

	//接触した敵の情報を取得 
	private void OnCollisionEnter2D(Collision2D col) {
		GameObject eInfo;
		eInfo = col.gameObject;

		eStats = eInfo.GetComponent<EnemyStats> ();
		Debug.Log (eStats.eName + "とぶつかった！");

	}

	public void PlayerAtk() {
		Debug.Log ("PlayerAtk");

		eStats.eHp -= 1;

		if (eStats.eHp <= 0) {
			BattleManager.isEnemyDead = true;
		}
	}



	//ステージクリア時のアニメーションに切り替え
	void ChangeAnimWin () {
		this.GetComponent<Animator> ().SetBool ("gameClear", true);
	}
		
}
