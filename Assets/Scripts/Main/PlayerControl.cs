//Stage開始時にプレイヤーのステータスを初期化する
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

	//戦闘中の敵の情報
	public EnemyStats eStats;

	//PlayerStatsのステータスを格納する
	public int pHp;
	public int pAtk;
	public int pDef;
	public int pAgl;
	public int pHeal;

	//HPゲージ
	private GameObject pHpGauge;
	private Slider pHpSlider;

	//ダメージ表示
	private EDamageTextGen gen;

	private DamageCalc damageCalc;


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

		//ダメージ
		var obj = GameObject.Find ("EDamageTextGen");
		gen = obj.GetComponent<EDamageTextGen>();

		damageCalc = obj.GetComponent<DamageCalc>();
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

	}

	public void PlayerAtk() {

		//ダメージの計算だけして敵の方で減らすか Enemy.EnemyDamage(damage);

		//命中判定
		bool isHit = damageCalc.IsHit (pAgl, eStats.eAgl);

		//ダメージ計算
		int damage = damageCalc.Calc (pAtk, eStats.eDef);

		//ダメージの数値と命中判定
		eStats.EnemyDamage (damage, isHit);

	}


	public void PlayerDamage(int damage){
		pHp -= damage;
		Debug.Log (eStats.eName + "から" + damage + "のダメージをうけた。いてー");

		//EDamageTextGenの
		gen.PDTGen (damage);




	}



	//ステージクリア時のアニメーションに切り替え
	void ChangeAnimWin () {
		this.GetComponent<Animator> ().SetBool ("gameClear", true);
	}
		
}
