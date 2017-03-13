// Afam Ezenekwe

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class patrol : Ienemy

{
	private Enemy enemy; // Allows access for the enemy script in the Patrol class.
	private float ptimer; // Give a patrol timer.
	private float pduration = 5; // Gives the amount time the enemy will patrol.

	public void execute () // Executes the Patrol function for the enemy.
	{
		Debug.Log (" I'm patrol");	
		Patrol ();
		enemy.Move ();
		if (enemy.Target != null && enemy.InThrowRange) 
		{
			enemy.ChangeState(new range());
		}
	}

	public void Enter (Enemy enemy) // Allows for the enemy script to be accessed in the patrol function and executed.
	{
		this.enemy = enemy;
	}

	public void Exit ()
	{
		
	}

	public void OnTriggerEnter (Collider2D other) // Allows access for the trigger function.
	{
		if (other.tag == "Edge") 
		{
			enemy.ChangeDirection();
		}
	}

	private void Patrol() // function that allows for the enemy to patrol across the stage.
	{
		
		ptimer += Time.deltaTime;

		if (ptimer >= pduration) {
			enemy.ChangeState (new Idle ());
		}
	}
}