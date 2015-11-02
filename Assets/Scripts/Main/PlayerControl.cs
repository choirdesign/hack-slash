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


	private void OnCollisionEnter2D(Collision2D col) {
		GameObject eInfo;
		eInfo = col.gameObject;
		EnemyStats eStats;
		eStats = eInfo.GetComponent<EnemyStats> ();
		Debug.Log (eStats.eName + "とぶつかった！");
	}




	//ステージクリア時のアニメーションに切り替え
	void ChangeAnimWin () {
		this.GetComponent<Animator> ().SetBool ("gameClear", true);
	}
		
}
