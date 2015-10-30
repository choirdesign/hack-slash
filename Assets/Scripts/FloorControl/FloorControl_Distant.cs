//遠景にアタッチ
//カメラを追跡する カメラを追尾しなくてもいいのでは？？
using UnityEngine;
using System.Collections;

public class FloorControl_Distant : MonoBehaviour {

	private GameObject main_camera;
	private Transform cameraTrans;
	private float myHeight;

	// Use this for initialization
	void Start () {

		this.main_camera = GameObject.FindGameObjectWithTag("MainCamera"); //カメラ
		cameraTrans = main_camera.GetComponent<Transform> ();
		myHeight = this.transform.position.y;


	}
	
	// Update is called once per frame
	void Update () {
		transform.position = new Vector3 (cameraTrans.position.x, myHeight, 10);
	}
}
