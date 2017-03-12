// Afam Ezenekwe

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class range : Ienemy

{
	
	private Enemy enemy; // Allows for Access in the enemy class.
	private float TTimer; // Timer for the range class.
	private float TCooldown = 3; // Cooldown duration for the Range class.
	private bool canT = true; // allows for the range function to attack.

	public void execute ()
	{
		ThrowKnife (); // Throw knife function or functionality that is used to have the enemy attack.
		if (enemy.InAttackRange) 
		{
			enemy.ChangeState (new Attack ());
		}
			else if (enemy.Target != null) 
		{
			enemy.Move ();
		
		} else {
			enemy.ChangeState (new Idle ());
		}
	}

	public void Enter (Enemy enemy) // allows for the enemy to enter the stage.
	{
		this.enemy = enemy;
	}

	public void Exit ()
	{
		
	}

	public void OnTriggerEnter (Collider2D other) // 
	{
		
	}

	private void ThrowKnife() // Function that allows for the enemy to actually throw the knife function.
	{
		TTimer += Time.deltaTime;
		if (TTimer >= TCooldown) 
		{
			canT = true;
			TTimer = 0;
		}
		if (canT)
		{
			canT = false;
			enemy.EnemyAnimator.SetTrigger ("throw");
		}
	}
}
