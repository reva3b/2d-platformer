// Author: Afam Ezenekwe

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Char : MonoBehaviour 
{



	public Animator EnemyAnimator { get; private set; } // Animator is made into a property so that it can be given values in the code.

	[SerializeField]
	protected Transform BulletPosition; // Position for the bullet/value that is used by the enemy.

	[SerializeField]
	protected float PlayerMovementSpeed; // Player/Enemy movement speed.

	protected bool IsPlayerFacingRight; // Allows for the enemy to flip or go in a different direction once it encounters an object.

	[SerializeField]
	private GameObject BulletPrefab; // Prefab for the to access the bullet.

	[SerializeField]
	protected int Health; // Integer function for health.

	[SerializeField]
	private EdgeCollider2D KinfeCollider; // Allows access to the knife Collider.

	[SerializeField]
	private List<string> damageSources; // Allows for multiple attacks to hurt the enemy.

	public abstract bool IsDead { get; } // allows for access for the isDead function.

	public bool IPlayerAttacking { get; set; } // Allows for Access for the playerAttacking function.

	public bool TakingDamage { get; set; } // Allows for access for the TakingDamage function.

	// Use this for initialization
	public virtual void Start () 
	{
		IsPlayerFacingRight = true; // If the enemy is facing right and encounters an object they will switch positions.
		EnemyAnimator = GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	public abstract IEnumerator TakeDamage(); // Turns the TakeDamage function into an IEnumerator.


	public abstract void Death ();

	public void ChangeDirection() // Public Void Function used to change Direction.
	{
		IsPlayerFacingRight = !IsPlayerFacingRight;
		transform.localScale = new Vector3 (transform.localScale.x * -1, 1, 1);
	}

	public virtual void ThrowKnife(int value) // Function that is used to have the enemy throw a knife at the player.
	{
		if (IsPlayerFacingRight)
		{
			GameObject tmp = (GameObject)Instantiate(BulletPrefab, BulletPosition.position, Quaternion.Euler(new Vector3(0, 0, 0)));
			tmp.GetComponent<Kunai>().Initialize (Vector2.right);

		}
		else
		{
			GameObject tmp = (GameObject)Instantiate(BulletPrefab, BulletPosition.position, Quaternion.Euler(new Vector3(0, 0, -180)));
			tmp.GetComponent<Kunai>().Initialize (Vector2.left); 



   }
 }
	public void PlayerAttacks() // Function that is used to allow the enemy to be attacked by the player.
	{
		KinfeCollider.enabled = !KinfeCollider.enabled;
	}



	public virtual void OnTriggerEnter2D(Collider2D other) // This function allows for the enemy to be attacked by mulitple different things if it is assigned.
	{
		if (damageSources.Contains(other.tag))
		{
			StartCoroutine (TakeDamage());
		}
	}
}
