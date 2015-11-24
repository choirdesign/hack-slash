using UnityEngine;
using System.Collections;

public class SetPlayerStats : MonoBehaviour {

	// Use this for initialization
	void Start () {
		PlayerStats.stacXp = PlayerPrefs.GetInt ("STACXP", 0);
		PlayerStats.hitpoint = PlayerPrefs.GetInt ("HP", 2);
		PlayerStats.attack = PlayerPrefs.GetInt ("ATK", 1);
		PlayerStats.deffence = PlayerPrefs.GetInt ("DEF", 1);
		PlayerStats.agility = PlayerPrefs.GetInt ("AGL", 1);
		PlayerStats.heal = PlayerPrefs.GetInt ("HEAL", 1);

		Debug.Log ("HP" + PlayerStats.hitpoint +
			"ATK" + PlayerStats.attack +
			"DEF" + PlayerStats.deffence +
			"AGL" + PlayerStats.agility +
			"HEAL" + PlayerStats.heal	);
		Debug.Log ("今たまってる経験値は" + PlayerStats.stacXp + "ポイント");


	}
}
