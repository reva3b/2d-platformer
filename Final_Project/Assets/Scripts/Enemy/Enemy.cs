// Afam Ezenekwe

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : Char 
{


	public override void Death () // Function that is used to destroy the enemy class if the player kills the enemy.
	{
		Destroy (gameObject);	
	}



	

	public override bool IsDead // Function in enemy that will dictate the death of enemy if the health reaches zero. 
	{
		get {
			return Health <= 0;
		}
	}

	public override IEnumerator TakeDamage() // Function in the enemy class that allows the enemy to take damage when the player attackes the enemy.
	{
		Health -= 10;
		if (!IsDead) 
		{
			EnemyAnimator.SetTrigger ("Damage"); // The damage animator will begin.
		} 
		else 
		{
			EnemyAnimator.SetTrigger ("Die"); // The Die animator will begin.
			yield return null;
		}
	}

	private Ienemy currentState; // 

	public GameObject Target { get; set; } // Allows for the enemy to be targeted by the player.

	[SerializeField]
	private float AttackRange; // Private float to allow for a number to be in the attackrange.

	[SerializeField]
	private float ThrowRange; // Private float to allow for a number to be in the Throwrange.

	public bool InAttackRange // Boolean function to depict the InAttackRange.
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

	public bool InThrowRange // Function to indicate when the enemy will be in ThrowRange to attack the player.
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

	public override void Start () // Starts the function the enemy.
	{
		base.Start();
		ChangeState (new Idle ());
	}
	
	private void LookAtTarget() // Function that is used to have the enemy look at the target.
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

	// Update is called once per frame
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

	public void ChangeState(Ienemy newState) // Changes the state of the enemy.
	{
		if (currentState != null) 
		{
			currentState.Exit ();
		}
		currentState = newState;
		currentState.Enter(this);
	}

	public void Move() // Function that is used to move the enemy.
	{
		EnemyAnimator.SetFloat ("speed", 1);
		transform.Translate(GetDirection() * (PlayerMovementSpeed * Time.deltaTime));
	}

	public Vector2 GetDirection() // Gets the direction of which way the enemy is going.
	{
		return IsPlayerFacingRight ? Vector2.right : Vector2.left;
	}

	public  void OntriggerEnter2D(Collider2D other)
	{
		base.OnTriggerEnter2D(other);
		currentState.OnTriggerEnter(other);
	}
}
