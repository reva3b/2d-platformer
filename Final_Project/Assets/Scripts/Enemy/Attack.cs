using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Attack : Ienemy 
{
	private float attackTimer;
	private float attackCooldown = 0;
	private bool canattack;
	private Enemy enemy;
	public void execute ()
	{
		attack ();
		if (enemy.InThrowRange && !enemy.InAttackRange) {
			{
				enemy.ChangeState (new range ());
			}
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

	private void attack()
	{
		attackTimer += Time.deltaTime;
		if (attackTimer >= attackCooldown) 
		{
			canattack = true;
			attackTimer = 0;
		}
		if (canattack)
		{
			canattack = false;
			enemy.EnemyAnimator.SetTrigger ("attack");
		}
	}
}