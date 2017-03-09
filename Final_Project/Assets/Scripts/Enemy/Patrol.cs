using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class patrol : Ienemy

{
	private Enemy enemy;
	private float ptimer;
	private float pduration = 5;

	public void execute ()
	{
		Debug.Log (" I'm patrol");	
		Patrol ();
		enemy.Move ();
		if (enemy.Target != null && enemy.InThrowRange) 
		{
			enemy.ChangeState(new range());
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
		if (other.tag == "Edge") 
		{
			enemy.ChangeDirection();
		}
	}

	private void Patrol()
	{
		
		ptimer += Time.deltaTime;

		if (ptimer >= pduration) {
			enemy.ChangeState (new Idle ());
		}
	}
}