

//EnemyBuild.enemyEachLine[]を元にステータスを初期化
using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class EnemyStats : MonoBehaviour {

	//publicにするのは危ない気もする。。。
	public string eName;
	public int eHp;
	public int eAtk;
	public int eDef;
	public float eSpd;
	public int eAgl;
	public int eHeal;
	public int eXp;
	private string[] enemyEachInfo;


	void Update () {
	
	}

	public void EnemyInit (int enemyNum) {

		//ID,名前,HP,攻撃力,防御力,攻撃速度,素早さ,回復力,経験値,使用スキルパターン
		string enemyInfo = EnemyBuild.enemyEachLine [enemyNum];
		enemyEachInfo = enemyInfo.Split ("," [0]);

		eName = enemyEachInfo [1];
		eHp = int.Parse (enemyEachInfo [2]);
		eAtk = int.Parse (enemyEachInfo [3]);
		eDef = int.Parse (enemyEachInfo [4]);
		eSpd = float.Parse (enemyEachInfo [5]);
		eAgl = int.Parse (enemyEachInfo [6]);
		eHeal = int.Parse (enemyEachInfo [7]);
		eXp = int.Parse (enemyEachInfo [8]);

		Debug.Log(eName + " HP" + eHp + ", 攻撃力" + eAtk + ", " +
			"防御力" + eDef + ", 攻撃速度" + eSpd + ", 敏捷度" + eAgl + ", 回復力" + eHeal + ", 経験値" + eXp);
			



	}


}
