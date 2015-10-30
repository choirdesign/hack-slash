//EnemyBuildのEnemySetUpをよぶ
//StageBuildのStageSetUpをよぶ
using UnityEngine;
using System.Collections;

public class StageManagerColl : MonoBehaviour {


	private GameObject stageManager;

	// Use this for initialization
	void Start () {
		stageManager = GameObject.Find ("StageManager");

		stageManager.SendMessage ("EnemySetUp");
		stageManager.SendMessage ("StageSetUp");
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
