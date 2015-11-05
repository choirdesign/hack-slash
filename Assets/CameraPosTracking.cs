using UnityEngine;
using System.Collections;

public class CameraPosTracking : MonoBehaviour {

	public GameObject stageCamera;
	private Transform cameraTrans;

	// Use this for initialization
	void Start () {
		cameraTrans = stageCamera.GetComponent<Transform> ();

	}

	// Update is called once per frame
	void Update () {
	
		Vector3 pos = cameraTrans.position;
		transform.position = new Vector3 (pos.x + 1, pos.y + 1.1f, 0);


	}
}
