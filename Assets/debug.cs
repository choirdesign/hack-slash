using UnityEngine;
using System.Collections;

public class debug : MonoBehaviour {

	private XPScript xps;


	void Start () {
		GameObject obj;
		obj = GameObject.Find ("XP");
		xps = obj.GetComponent<XPScript>();

	}

	public void OnPush () {
		PlayerStats.stacXp += 10000;
	}

}
