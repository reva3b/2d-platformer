using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Idle : Ienemy
{
	
	private Enemy enemy;
	private float itimer;
	private float iduration = 5;

	public void execute ()
	{
		Debug.Log ("I'm idling");	
		idle ();
		if (enemy.Target != null) 
		{
			enemy.ChangeState (new patrol());
		}
	}

	public void Enter (Enemy enemy)
	{
		this.enemy = enemy;	
	}

	public void Exit ()
	{
		
	}

	public void OnTriggerEnter (Collider2D other)
	{
		
	}

	private void idle()
	{
		enemy.EnemyAnimator.SetFloat ("speed", 0);
		itimer += Time.deltaTime;

		if (itimer >= iduration) {
			enemy.ChangeState (new patrol ());
		}
	}
}