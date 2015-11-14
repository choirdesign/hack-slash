//XPのテキストにアタッチ
using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class XPScript : MonoBehaviour {

	private Text xpText;
	private int xp;

	// Use this for initialization
	void Start () {
		xp = PlayerStats.stacXp;
		xpText = this.gameObject.GetComponent<Text> ();
		xpText.text = "所有経験値:" + xp;
	}
	
	public void XPUpdate (int decreasedXP) {
		if (decreasedXP < xp) {
			xp -= decreasedXP;
			PlayerStats.stacXp = xp;
			xpText.text = "所有経験値:" + xp;

			PlayerPrefs.SetInt ("STACXP", PlayerStats.stacXp);

		} else if (decreasedXP > xp) {     
			Debug.Log ("予期せぬエラー");    //コストが所持経験値を上回っていたらボタンは押せないはず
		}

	}


}
