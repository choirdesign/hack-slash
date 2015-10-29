//攻撃ボタンにアタッチ
using UnityEngine;
using System.Collections;

public class AtkButton : MonoBehaviour {

	public GameObject player;
	public GameObject battleManager;
	private PlayerControl playerCtrl;

	void Start () {

	}

	//ボタンが押されたらBattleManagerの攻撃処理を呼ぶ、PlayerCtrlのアニメーション遷移する
	public void OnPushButton () {
		battleManager.SendMessage ("PlayerAtk");
		player.SendMessage ("ChangeAnimAtk");
	}

}
