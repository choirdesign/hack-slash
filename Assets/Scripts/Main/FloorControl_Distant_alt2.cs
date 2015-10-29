//遠景にアタッチ
//プレイヤーを追跡するVer
using UnityEngine;
using System.Collections;

public class FloorControl_Distant_alt2 : MonoBehaviour {

	private GameObject player;
	private Transform playerTrans;
	private float myHeight;

	public int speed = 3;

	// Use this for initialization
	void Start () {

		this.player = GameObject.FindGameObjectWithTag("MainCamera"); //プレイヤー
		playerTrans = player.GetComponent<Transform> ();
		myHeight = this.transform.position.y;

	}

	// Update is called once per frame
	void Update () {
		transform.position = new Vector3 (playerTrans.position.x, myHeight, 10);

		//transform.position = Vector3.right * speed * Time.deltaTime ;
	}
}
