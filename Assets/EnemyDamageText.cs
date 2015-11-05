using UnityEngine;
using System.Collections;

public class EnemyDamageText : MonoBehaviour {

	public bool IsFinish = false;

	public void OnAnimationFinish()
	{
		this.IsFinish = true;
	}
}
