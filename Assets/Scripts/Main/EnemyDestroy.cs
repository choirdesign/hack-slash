//それぞれ敵にアタッチ
//目の前の敵かどうかOnCollisionで判定している
//フェードアウトさせてDestroyさせ
//消える時に経験値を与える

using UnityEngine;
using System.Collections;

public class EnemyDestroy : MonoBehaviour {

	public float fadeTime = 1f;
	private float currentRemainTime;
	private SpriteRenderer spRenderer;

	private bool isDead;
	private bool enemyIdentifier;

	//経験値参照
	private EnemyStats enemyStats;


	// Use this for initialization
	void Start () {
		// 初期化
		enemyIdentifier = false;
		currentRemainTime = fadeTime;
		spRenderer = GetComponent<SpriteRenderer>();

		//経験値参照
		enemyStats = this.gameObject.GetComponent<EnemyStats> ();
	}

	// 死んだ時&&目の前の敵であるとき
	void Update () {
		isDead = BattleManager.isEnemyDead;
		if (isDead && enemyIdentifier) {



			//自分のタグがボスなら(Enemyじゃないなら)
			if (this.gameObject.tag != "Enemy") {
				stageClearUpdate ();
			}


			// 残り時間を更新
			currentRemainTime -= Time.deltaTime;

			if (currentRemainTime <= 0f) {
				// 残り時間が無くなったら自分自身を消滅
				GameObject.Destroy (gameObject);
				BattleManager.isEnemyDead = false;

				PlayerStats.stacXp += enemyStats.eXp;
				Debug.Log (enemyStats.eXp + "ポイントのけいけんちをてにいれた");
				Debug.Log ("累計けいけんちは" + PlayerStats.stacXp + "ポイント");

				string key = "STACXP";
				PlayerPrefs.SetInt (key, PlayerStats.stacXp);

				return;
			}

			// フェードアウト
			float alpha = currentRemainTime / fadeTime;
			var color = spRenderer.color;
			color.a = alpha;
			spRenderer.color = color;
		} else {
			return;
		}
	}

	//次のステージを解放する
	void stageClearUpdate() {
		string tag = this.gameObject.tag.Substring(4);
		int tagNum = int.Parse (tag);

		if (StageBuild.clearLevel <= tagNum) {
			StageBuild.clearLevel++; //1たす
			Debug.Log ("ステージ " + StageBuild.clearLevel + " をかいほうしたよ");
		} else  if(StageBuild.clearLevel > tagNum){
			Debug.Log ("このステージはもうクリアしてるよ");
			return;
		}
	}


	//目の前の敵
	void OnCollisionEnter2D (Collision2D col) {
		enemyIdentifier = true;
	}
		
}
