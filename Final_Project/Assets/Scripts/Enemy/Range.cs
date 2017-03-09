using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class range : Ienemy

{
	
	private Enemy enemy;
	private float TTimer;
	private float TCooldown = 3;
	private bool canT = true;

	public void execute ()
	{
		ThrowKnife ();
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

	private void ThrowKnife()
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
