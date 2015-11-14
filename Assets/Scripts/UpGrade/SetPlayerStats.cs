using UnityEngine;
using System.Collections;

public class SetPlayerStats : MonoBehaviour {

	// Use this for initialization
	void Start () {
		PlayerStats.stacXp = PlayerPrefs.GetInt ("STACXP", 0);
		PlayerStats.hitpoint = PlayerPrefs.GetInt ("HP", 0);
		PlayerStats.attack = PlayerPrefs.GetInt ("ATK", 0);
		PlayerStats.deffence = PlayerPrefs.GetInt ("DEF", 0);
		PlayerStats.agility = PlayerPrefs.GetInt ("AGL", 0);
		PlayerStats.heal = PlayerPrefs.GetInt ("HEAL", 0);

		Debug.Log ("HP" + PlayerStats.hitpoint +
			"ATK" + PlayerStats.attack +
			"DEF" + PlayerStats.deffence +
			"AGL" + PlayerStats.agility +
			"HEAL" + PlayerStats.heal	);
		Debug.Log ("今たまってる経験値は" + PlayerStats.stacXp + "ポイント");


	}
}
