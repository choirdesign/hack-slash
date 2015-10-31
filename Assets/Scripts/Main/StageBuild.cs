//CSVは用意しないで、currentStageの番号で判断
//シングルトンオブジェクトにくっついている
//地面の座標がずれる不具合




using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class StageBuild : MonoBehaviour {

	//ここにステージクリアフラグを置いてみる
	public static int clearLevel;	//0が入ってる

	//効率がわるい感じがするような。。。
	private SpriteRenderer distant;
	private SpriteRenderer near_1;
	private SpriteRenderer near_2;
	private SpriteRenderer near_3;
	private SpriteRenderer ground_1;
	private SpriteRenderer ground_2;
	private SpriteRenderer ground_3;

	public static int currentStage = 0; //押したボタンからタグの数字が入る


	void Start () {
		//ステージクリアフラグが0の時、初期化する処理
		if(clearLevel == 0){
			clearLevel = 1;
		}
	}

	//カメラのStageManagerCollに呼ばれる
	public void StageSetUp(){

		//Stageシーン上のゲームオブジェクトをFindする
		distant = GameObject.Find ("BG_distant").GetComponent<SpriteRenderer> ();
		near_1 = GameObject.Find ("BGPanel_near1").GetComponent<SpriteRenderer>();
		near_2 = GameObject.Find ("BGPanel_near2").GetComponent<SpriteRenderer>();
		near_3 = GameObject.Find ("BGPanel_near3").GetComponent<SpriteRenderer>();
		ground_1 = GameObject.Find ("BGPanel_ground1").GetComponent<SpriteRenderer>();
		ground_2 = GameObject.Find ("BGPanel_ground2").GetComponent<SpriteRenderer>();
		ground_3 = GameObject.Find ("BGPanel_ground3").GetComponent<SpriteRenderer>();


		Debug.Log ("BEFORE groundposition = " + ground_1.transform.position);

		Debug.Log ("currentstagenumber = " + currentStage);//押したボタンの数字が入ってる！

		//まずObject型に代入する
		Object loadDSprite = Resources.Load( "Images/BG_distant_" + currentStage.ToString() ); //遠景

		Object loadNSprite1 = Resources.Load( "Images/BG_near_" + currentStage.ToString() + "_1" ); //近景1
		Object loadNSprite2 = Resources.Load( "Images/BG_near_" + currentStage.ToString() + "_2" ); //近景2
		Object loadNSprite3 = Resources.Load( "Images/BG_near_" + currentStage.ToString() + "_3" ); //近景3
		Object loadGSprite1 = Resources.Load( "Images/BG_ground_" + currentStage.ToString() + "_1" ); //地面1
		Object loadGSprite2 = Resources.Load( "Images/BG_ground_" + currentStage.ToString() + "_2" ); //地面2
		Object loadGSprite3 = Resources.Load( "Images/BG_ground_" + currentStage.ToString() + "_3" ); //地面3

		//一時変数にTexture2D型にキャストして代入
		Texture2D Dtex = loadDSprite as Texture2D;
		Texture2D Ntex1 = loadNSprite1 as Texture2D;
		Texture2D Ntex2 = loadNSprite2 as Texture2D;
		Texture2D Ntex3 = loadNSprite3 as Texture2D;
		Texture2D Gtex1 = loadGSprite1 as Texture2D;
		Texture2D Gtex2 = loadGSprite2 as Texture2D;
		Texture2D Gtex3 = loadGSprite3 as Texture2D;

		//元の位置にスプライトを張り替える(作り変える)
		distant.sprite = Sprite.Create( Dtex, new Rect( 0, 0, Dtex.width, Dtex.height ), new Vector2(0.5f, 0.5f) );
		near_1.sprite = Sprite.Create( Ntex1, new Rect( 0, 0, Ntex1.width, Ntex1.height ), new Vector2(0.5f, 0.5f) );
		near_2.sprite = Sprite.Create( Ntex2, new Rect( 0, 0, Ntex2.width, Ntex2.height ), new Vector2(0.5f, 0.5f) );
		near_3.sprite = Sprite.Create( Ntex3, new Rect( 0, 0, Ntex3.width, Ntex3.height ), new Vector2(0.5f, 0.5f) );
		ground_1.sprite = Sprite.Create( Gtex1, new Rect( 0, 0, Gtex1.width, Gtex1.height ), new Vector2(0.5f, 0.5f) );
		ground_2.sprite = Sprite.Create( Gtex2, new Rect( 0, 0, Gtex2.width, Gtex2.height ), new Vector2(0.5f, 0.5f) );
		ground_3.sprite = Sprite.Create( Gtex3, new Rect( 0, 0, Gtex3.width, Gtex3.height ), new Vector2(0.5f, 0.5f) );

		//1.0
		//ground_3.sprite = Sprite.Create( Gtex3, new Rect( 0, 0, Gtex3.width, Gtex3.height ), new Vector2(0.5f, 0.5f) );

		/*
		if (distant.sprite == null) {
			Debug.Log ("よみこみしっぱい");
		}
		*/
	}

}
