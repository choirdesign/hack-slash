//背景のスクロール
//ステージの情報はここで展開する？
//背景のレイヤ情報はタグで取得して・・・
//ポーズボタン用のフラグここにたてとくみたいな
//多重スクロールにしたいけどできない

using UnityEngine;
using System.Collections;

public class FloorControl_Near : MonoBehaviour {

	private GameObject main_camera;

	//staticを消したらエラーでた
	public float	WIDTH;			//パーツの幅
	public int	MODEL_NUM;		//パーツの数

	private float playerSpeed;
	public int speed = 0;	//スクロール速度 0でもっとも遅い

	//?
	//private float timeleft;

	void Start() {
		this.main_camera = GameObject.FindGameObjectWithTag("MainCamera"); //カメラ


	}
		
	void Update() {

		playerSpeed = PlayerControl.moveSpeed;
	
		//プレイヤーが止まったら止まる
		if (playerSpeed != 0) {
			transform.position += Vector3.left * speed * Time.deltaTime ;
		}

		//float total_width = FloorControl.WIDTH*FloorControl.MODEL_NUM;
		float total_width = WIDTH * MODEL_NUM; //背景３つ分の幅
		Vector3	floor_position = this.transform.position;

		Vector3	camera_position = main_camera.transform.localPosition;


		//カメラが背景の幅の中間を超えたらパーツMODEL_NUM個ぶんワープする
		if(floor_position.x + total_width/2.0f < camera_position.x) {
	
			//前にワープ
			floor_position.x += total_width;
			this.transform.position = floor_position;
		}

		/*
		if(camera_position.x < floor_position.x - total_width/2.0f) {
		
			//後ろにワープ
			floor_position.x -= total_width;
			this.transform.position = floor_position;
		}
		*/

	}
}