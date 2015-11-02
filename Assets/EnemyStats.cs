
//ここで敵のCSV情報を受け取る
using UnityEngine;
using System.Collections;

public class EnemyStats : MonoBehaviour {

	private string eName;
	private int eHp;
	private int eAtk;
	private int eDef;
	private int eSpd;
	private int exp;
	private string[] enemyEachInfo;

	// Use this for initialization
	void Start () {
	

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void EnemyInit (int enemyNum) {
		string enemyInfo = EnemyBuild.enemyEachLine [enemyNum];
		enemyEachInfo = enemyInfo.Split ("," [0]);


		eName = enemyEachInfo [1];

		Debug.Log ("My name is " + eName);


	}


}
