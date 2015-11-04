//プレイヤーのステータスを管理したいところ
//各パラメータはstaticで持っておき、どこからでもアクセスしたい
//敵の特殊能力で値が変動するかもしれないから、やっぱりstaticでもっていた方がいい？

using UnityEngine;
using System.Collections;

public class PlayerStats : MonoBehaviour {

	//初期値
	public static int hitpoint = 100;
	public static int attack = 1;
	public static int deffence = 1;
	public static int agility = 1;
	public static int heal = 1;
	public static int stacXp = 0;





	/*
	 * public string eName;
	public int eHp;
	public int eAtk;
	public int eDef;
	public int eSpd;
	public int eAgl;
	public int eHeal;
	public int exp;
	private string[] enemyEachInfo;

*/

}
