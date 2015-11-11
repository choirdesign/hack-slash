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
	
	public void XPUpdate () {
		Debug.Log ("xpuより");
	}


}
