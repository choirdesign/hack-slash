using UnityEngine;
using System.Collections;

public class StageEnabled : MonoBehaviour {

	private string buttonTag;

	public GameObject obj;

	// Use this for initialization
	void Start () {

		buttonTag = this.gameObject.tag;
		string stageNum = buttonTag.Substring (5); //Stage 2←この文字を取得 

		obj.SetActive (false);

		if (int.Parse (stageNum) <= StageBuild.clearLevel) {	//2 <= 1 なので false 
			obj.SetActive (true);
		} else {
			obj.SetActive (false);
		}
	
	}

}
