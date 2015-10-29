//CSVは用意しないで、currentStageの番号だけで判断

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class StageBuild : MonoBehaviour {

	//効率がわるい感じがするような。。。
	private SpriteRenderer distant;
	/*
	private GameObject near_1;
	private GameObject near_2;
	private GameObject near_3;
	private GameObject ground_1;
	private GameObject ground_2;
	private GameObject ground_3;
	*/


	public static int currentStage;


	public void StageSetUp(){
		distant = GameObject.Find ("BG_distant").GetComponent<SpriteRenderer>();


		Debug.Log (distant.sprite);
		/*
		near_1 = GameObject.Find ("BGPanel_near1");
		near_2 = GameObject.Find ("BGPanel_near2");
		near_3 = GameObject.Find ("BGPanel_near3");
		ground_1 = GameObject.Find ("BGPanel_ground1");
		ground_2 = GameObject.Find ("BGPanel_ground2");
		ground_3 = GameObject.Find ("BGPanel_ground3");
		*/



		Object obj = Resources.Load( "Images/BG_distant1" );
		Texture2D tex = obj as Texture2D;
		distant.sprite = Sprite.Create( tex, new Rect( 0, 0, tex.width, tex.height ), new Vector2(0.5f, 0.5f) );



		if (distant.sprite == null) {
			Debug.Log ("よみこみしっぱい");
		}
	}

}
