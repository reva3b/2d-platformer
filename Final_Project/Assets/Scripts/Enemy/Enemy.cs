using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : Char 
{
	

	public override bool IsDead 
	{
		get {
			return Health <= 0;
		}
	}

	public override IEnumerator TakeDamage()
	{
		Health -= 10;
		if (!IsDead) 
		{
			EnemyAnimator.SetTrigger ("Damage");
		} 
		else 
		{
			EnemyAnimator.SetTrigger ("Die");
			yield return null;
		}
	}

	private Ienemy currentState;
	public GameObject Target { get; set; }
	[SerializeField]
	private float AttackRange;
	[SerializeField]
	private float ThrowRange;

	public bool InAttackRange
	{
		get
		{
			if (Target != null)
			{
				return Vector2.Distance (transform.position, Target.transform.position) <= AttackRange;

			}
			return false;
		}
	}

	public bool InThrowRange
	{
		get
		{
			if (Target != null)
			{
				return Vector2.Distance (transform.position, Target.transform.position) <= ThrowRange;
			}
			return false;
		}
	}

	public override void Start () 
	{
		base.Start();
		ChangeState (new Idle ());
	}
	
	private void LookAtTarget()
	{
		if (Target != null) 
		{
			float xDir = Target.transform.position.x - transform.position.x;

			if (xDir < 0 && IsPlayerFacingRight || xDir > 0 & !IsPlayerFacingRight) 
			{
				ChangeDirection ();
			}
		}
	}

	//Update is called once per frame
	void Update () 
	{
		if (!IsDead)
		{
			if (!TakingDamage) 
			{
				currentState.execute ();	
			}
		LookAtTarget ();
	}

	}

	public void ChangeState(Ienemy newState)
	{
		if (currentState != null) 
		{
			currentState.Exit ();
		}
		currentState = newState;
		currentState.Enter(this);
	}

	public void Move()
	{
		EnemyAnimator.SetFloat ("speed", 1);
		transform.Translate(GetDirection() * (PlayerMovementSpeed * Time.deltaTime));
	}

	public Vector2 GetDirection()
	{
		return IsPlayerFacingRight ? Vector2.right : Vector2.left;
	}

	public  void OntriggerEnter2D(Collider2D other)
	{
		base.OnTriggerEnter2D(other);
		currentState.OnTriggerEnter(other);
	}
}
