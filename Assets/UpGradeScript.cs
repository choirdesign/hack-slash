//ボタンにアタッチ
//

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class UpGradeScript : MonoBehaviour {

	public GameObject stats; //ステータス名のオブジェクト
	public GameObject cost;	//それぞれのコスト表示オブジェクト

	//画面に表示されるテキスト Check()で判別
	private string statsText;		//表示、更新用テキスト
	private int eachStats;		//それぞれのステータス
	private Text dispText;		//実際に表示する

	private string statsType;

	private int decreasedXP;	//成長で消費したXP

	private int needCost;	//アップグレードに必要なコスト これもPrefsに保存
	private Text costText;

	private XPScript xps;

	void Start () {
			
		dispText = stats.GetComponent<Text>();
		Check();

		GameObject obj;
		obj = GameObject.Find ("XP");
		xps = obj.GetComponent<XPScript>();




	}
	 
	void Update () {
		//所有XPが必要コストを上回っていればボタンを使用可に、
		//下回っていれば使用不可に
		if(needCost <= PlayerStats.stacXp){
			this.gameObject.GetComponent<Button> ().interactable = true; //使用できるか切り替え
		}if (needCost > PlayerStats.stacXp) {
			this.gameObject.GetComponent<Button> ().interactable = false; //使用できるか切り替え
		}

	}


	public void OnClick () {
		//所有XPが必要コストを上回っていれば, ステータスを+1する

		eachStats += 1;

		SaveEachStats (statsType);

		xps.XPUpdate (needCost); //XPの表示を更新,所持XPを更新

		//必要コストを再設定 //全てのコストを一定にして、バトル時にステータスごとの差を出すので良さそう
		needCost = (int) Mathf.Round (10 * Mathf.Pow (1.15f, eachStats));

		//ステータスとコストの表示を更新
		TextUpdate ();

		Debug.Log ("えええhp" + PlayerStats.hitpoint);

	}



	private void Check () {
		string name = stats.name;

		switch (name) {
		case "HP":
			eachStats = PlayerStats.hitpoint;
			statsType = "たいりょく:";


			//コスト
			cost = GameObject.Find ("HPcost");

			needCost = PlayerStats.hpCost;
			costInit ();
			costText = cost.GetComponent<Text> ();

			TextUpdate ();

			break;

		case "ATK":
			eachStats = PlayerStats.attack;
			statsType = "こうげき力:";

			cost = GameObject.Find ("ATKcost");
			needCost = PlayerStats.atkCost;
			costInit ();
			costText = cost.GetComponent<Text> ();
			TextUpdate ();

			break;


		case "DEF":
			eachStats = PlayerStats.deffence;
			statsType = "ぼうぎょ力:";

			cost = GameObject.Find ("DEFcost");
			needCost = PlayerStats.defCost;
			costInit ();
			costText = cost.GetComponent<Text> ();
			TextUpdate ();

			break;

		case "AGL":
			eachStats = PlayerStats.agility;
			statsType = "びんしょう:";

			cost = GameObject.Find ("AGLcost");
			needCost = PlayerStats.aglCost;
			costInit ();
			costText = cost.GetComponent<Text> ();
			TextUpdate ();

			break;

		case "HEAL":
			eachStats = PlayerStats.heal;
			statsType = "かいふく力:";

			cost = GameObject.Find ("HEALcost");
			needCost = PlayerStats.healCost;
			costInit ();
			costText = cost.GetComponent<Text> ();
			TextUpdate ();

			break;

		default:
			Debug.Log ("ステータス読み込み異常");
			break;

		}
	}


	//テキスト更新
	void TextUpdate () {
		dispText.text = statsType + eachStats.ToString(); 
		costText.text = "コスト" + needCost;
	}


	//コストの初期値を設定
	void costInit () {

		//PlayerStatsで設定した
		if (needCost == 0) {
			//初期コストを設定
			needCost = 10;

		}

	}

	void SaveEachStats (string statsType){
		switch (statsType) {
		case "たいりょく:":
			PlayerStats.hitpoint = eachStats;
			PlayerPrefs.SetInt ("HP", eachStats);
			Debug.Log ("げんざいのHPを保存、" + eachStats + " ポイント");
			break;

		case "こうげき力:":
			PlayerStats.attack = eachStats;
			PlayerPrefs.SetInt ("ATK", eachStats);
			Debug.Log ("げんざいのATKを保存、" + eachStats + " ポイント");
			break;

		case "ぼうぎょ力:":
			PlayerStats.deffence = eachStats;
			PlayerPrefs.SetInt ("DEF", eachStats);
			Debug.Log ("げんざいのDEFを保存、" + eachStats + " ポイント");
			break;

		case "びんしょう:":
			PlayerStats.agility = eachStats;
			PlayerPrefs.SetInt ("AGL", eachStats);
			Debug.Log ("げんざいのAGLを保存、" + eachStats + " ポイント");
			break;

		case "かいふく力:":
			PlayerStats.heal = eachStats;
			PlayerPrefs.SetInt ("HEAL", eachStats);
			Debug.Log ("げんざいのHEALを保存、" + eachStats + " ポイント");
			break;


		default:
			break;

		}


	}

}