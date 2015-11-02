﻿//敵にアタッチ
//死んでかつ目の前の敵を消す フェードアウト
//目の前の敵かどうかOnCollisionで判定している
using UnityEngine;
using System.Collections;

public class EnemyDestroy : MonoBehaviour {

	public float fadeTime = 1f;
	private float currentRemainTime;
	private SpriteRenderer spRenderer;

	private bool isDead;
	private bool enemyIdentifier;

	// Use this for initialization
	void Start () {
		// 初期化
		enemyIdentifier = false;
		currentRemainTime = fadeTime;
		spRenderer = GetComponent<SpriteRenderer>();
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
