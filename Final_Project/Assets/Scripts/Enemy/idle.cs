// Afam Ezenekwe

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Idle : Ienemy
{
	
	private Enemy enemy; // Gives Idle class functions to the enemy class.
	private float itimer; // Timer that is made for the idle position.
	private float iduration = 5; // the amount of time that the enemy will stay in the idle position.

	public void execute () // Execute function to start the Idle animation. 
	{
		Debug.Log ("I'm idling");	
		idle ();
		if (enemy.Target != null) 
		{
			enemy.ChangeState (new patrol());
		}
	}

	public void Enter (Enemy enemy) // This will instatiate the enemy class for the enemy.
	{
		this.enemy = enemy;	
	}

	public void Exit ()
	{
		
	}

	public void OnTriggerEnter (Collider2D other) // Allows access to the collider2D.
	{
		
	}

	private void idle() // Function for idle, it is incremented by deltatime.
	{
		enemy.EnemyAnimator.SetFloat ("speed", 0);
		itimer += Time.deltaTime;

		if (itimer >= iduration) {
			enemy.ChangeState (new patrol ());
		}
	}
}