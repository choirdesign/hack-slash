//敵のダメージ文字
//生成されたらすぐにEnemyDamageCanvasの子になる

using UnityEngine;
using System.Collections;

public class WannaBeChild : MonoBehaviour {

	private GameObject eDamageCanvas;



	// Use this for initialization
	void Start () {
		eDamageCanvas = GameObject.Find ("EnemyDamageCanvas");
		this.transform.SetParent (eDamageCanvas.transform, false);
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
