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

	private string statsType;	//コストの計算式分岐

	private int decreasedXP;	//成長で消費したXP

	private int needCost;	//アップグレードに必要なコスト これもPrefsに保存

	private XPScript xps;

	void Start () {
	
		if (needCost == 0) {
			//初期コストを設定
		}
			
		dispText = stats.GetComponent<Text>();
		Check();

		GameObject obj;
		obj = GameObject.Find ("XP");
		xps = obj.GetComponent<XPScript>();




	}

	void Update () {
		//所有XPが必要コストを上回っていればボタンを使用可に、
		//下回っていれば使用不可に
		//this.gameObject.GetComponent<Button> ().interactable = false; //使用できるか切り替え
	}


	public void OnClick () {
		//所有XPが必要コストを上回っていれば, ステータスを+1する

		//xps.XPUpdate (decreasedXP); //XPの表示を更新,所持XPを更新

		//必要コストを再設定 //全てのコストを一定にして、バトル時にステータスごとの差を出すので良さそう

		//ステータスとコストの表示を更新
	}



	private void Check () {
		string name = stats.name;

		switch (name) {
		case "HP":
			eachStats = PlayerStats.hitpoint;
			statsText = "たいりょく:" + eachStats.ToString ();
			dispText.text = statsText; 
			statsType = "hp";
			break;

		case "ATK":
			eachStats = PlayerStats.attack;
			statsText = "こうげき力:" + eachStats.ToString ();
			dispText.text = statsText; 
			statsType = "atk";
			break;

		case "DEF":
			eachStats = PlayerStats.deffence;
			statsText = "ぼうぎょ力:" + eachStats.ToString ();
			dispText.text = statsText; 
			statsType = "def";
			break;

		case "AGL":
			eachStats = PlayerStats.agility;
			statsText = "びんしょう:" + eachStats.ToString ();
			dispText.text = statsText; 
			statsType = "agl";
			break;

		case "HEAL":
			eachStats = PlayerStats.heal;
			statsText = "かいふく力:" + eachStats.ToString ();
			dispText.text = statsText; 
			statsType = "heal";
			break;


		default:
			Debug.Log ("ステータス読み込み異常");
			break;



		}
			
	}

}