// Author : Afam Ezenekwe

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Attack : Ienemy // Ienemy in attack is used for the Attack class to access the IEnemy class. 
{
	private float attackTimer; // Private float used to instiatiate the timer for the attack.
	private float attackCooldown = 0; // Attack cooldown float is set to 0 so that the enemy can attack multiple times.
	private bool canattack; // Boolean variable used to tell the enemy to attack.
	private Enemy enemy; // Gives attack access to the enemy script.
	public void execute ()
	{
		attack ();
		if (enemy.InThrowRange && !enemy.InAttackRange) // if enemy is in range they will attack the enemy, with their sword.
		{
			{
				enemy.ChangeState (new range ()); // the enemy's animation will change into the attacking animation.
			}
		}
	}

	public void Enter (Enemy enemy) 
	{
		this.enemy = enemy;	 // This is used to point to enemy so the enemy can access it.
	}

	public void Exit ()
	{
		
	}

	public void OnTriggerEnter (Collider2D other) // Allows for the 2D collider to be accessed.
	{
		
	}

	private void attack()
	{
		attackTimer += Time.deltaTime; // attacktimer will be incremented by delta time.
		if (attackTimer >= attackCooldown) // if the attack timer is great then or equal too the character will attack.
		{
			canattack = true; // will equal true and the enemy will attack.
			attackTimer = 0;
		}
		if (canattack)
		{
			canattack = false; // not in range enemy will not attack.
			enemy.EnemyAnimator.SetTrigger ("attack");
		}
	}
}