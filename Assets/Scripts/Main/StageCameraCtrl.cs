//StageControlからのメッセージによりプレイヤーを追跡
using UnityEngine;
using System.Collections;

public class StageCameraCtrl : MonoBehaviour {

	public GameObject player;
	private Transform playerTrans;

	// Use this for initialization
	void Start () {
		playerTrans = player.GetComponent<Transform> ();//プレイヤーの位置

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	//StageControlにSendMessageで呼ばれる
	void Advancing () {
		transform.position = new Vector3 (playerTrans.position.x + 1.2f, 0, -10); //プレイヤーのちょっと先に移動 1.74f?
	}
}
