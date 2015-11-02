//Stageでのプレイヤーの挙動を制御する
//侵略度が100になったら勝利アニメーションに切り替え
//ポーズボタン用のフラグここにたてとくみたいな

using UnityEngine;
using System.Collections;

public class PlayerControl : MonoBehaviour {

	private Vector3 pos;

	//侵略度を参照する
	public GameObject mainCamera;
	private StageControl stageControl;
	public static float moveSpeed = 0.1f;

	//ポーズ用
	public static bool pauseFlg = false;

	//敵の情報
	public EnemyStats eStats;

	void Start () {
		Debug.Log ("start");
		moveSpeed = 0.1f;
		pos = transform.localPosition;
		stageControl = mainCamera.GetComponent<StageControl> ();
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
	}

	//攻撃アニメーションを表示
	public void ChangeAnimAtk () {
		Debug.Log ("callAtk");
		StartCoroutine ("Anim");
	}

	private IEnumerator Anim () {
		this.GetComponent<Animator> ().SetBool ("playerAtk", true);
		yield return new WaitForSeconds (0.05f);
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
