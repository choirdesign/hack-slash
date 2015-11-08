//ダメージを計算する
//EnemyDamageTextGenにアタッチ
using UnityEngine;
using System.Collections;

public class DamageCalc : MonoBehaviour {

	public bool IsHit (int pAgl, int eAgl) {
		bool isHit = true;

		//命中の計算式(仮)
		int hoge = 99 - (eAgl - pAgl); 
		int rand = Random.Range(0,99);

		if (hoge > rand) {
			isHit = true;
		} else if (hoge <= rand) {
			isHit = false;
		}
			
		return isHit;

	}


	public int Calc (int myAtk, int enemyDef){
		int damage;
		//int randP = RndPCalc (myAtk);

		//damage = myAtk / 2 - enemyDef / 4 + (Random.Range (0, randP));
		damage = myAtk / 2 - enemyDef / 4 + (Random.Range (0, 1));

		if (damage < 0) {
			damage = 1;
		}


		Debug.Log ("Finish Calc");

		//return damage;
		return 1;
	}

	private int RndPCalc (int Atk){
		int randP;

		if (Atk <= 10) {
			randP = 1;
		}

		if (Atk >= 11 && Atk < 30) {
			randP = 2;
		}

		if (Atk >= 31 && Atk < 80) {
			randP = 5;
		}

		if (Atk >= 81 && Atk < 150) {
			randP = 10;
		}

		if (Atk >= 151 && Atk < 300) {
			randP = 15;
		}

		if (Atk >= 301 && Atk < 600) {
			randP = 30;
		}

		if (Atk >= 601 && Atk < 1000) {
			randP = 60;
		}

		else {
			randP = 0;
			Debug.Log ("Atk error!");
		}

		return randP;

	}

	public void Log () {
		Debug.Log ("DamageCalcのメソッド");
	}


}
