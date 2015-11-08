using UnityEngine;
using System.Collections;

public class SetPlayerStats : MonoBehaviour {

	// Use this for initialization
	void Start () {
		PlayerStats.stacXp = PlayerPrefs.GetInt ("STACXP", 0);
		Debug.Log ("今たまってる経験値は" + PlayerStats.stacXp + "ポイント");


	}
}
