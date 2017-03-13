using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class range : Ienemy

{
	
	private Enemy enemy;

	private float Firetimer;
	private float FireCoolDown= 3;
	private bool canFire;


	public void execute ()
	{
		FireBullet ();
		if (enemy.Target != null) 
		{
			//enemy.Move ();
		
		} else {
			//enemy.ChangeState (new Idle ());

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


	public void FireBullet()
	{
		Firetimer += Time.deltaTime;
		{
			canFire = true;
			Firetimer = 0;
		}
		if (canFire)
		{
			canFire = false;
			//enemy.PlayerAnimator.SetTrigger ("throw");
		}
	}

}
