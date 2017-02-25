using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class CharacterEnemyScript : MonoBehaviour {
	protected Animator PlayerAnimator;

	[SerializeField]
	protected float PlayerMovementSpeed;

	protected bool IsPlayerFacingRight;

	[SerializeField]
	private Transform[] PlayerGroundPoints;

	[SerializeField]
	private LayerMask WhatIsGroundForPlayer;

	[SerializeField]
	private float PlayerGroundRadius;

	[SerializeField]
	private float PlayerJumpForce;

	private bool IsPlayerAttacking;

	private bool PlayerIsGrounded;

	private bool ShouldPlayerJump;





	// Use this for initialization
	public virtual void Start () 
	{
		Debug.Log ("CharStart");
		IsPlayerFacingRight = true;
		PlayerAnimator = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void ChangeDirection()
	{
		IsPlayerFacingRight = !IsPlayerFacingRight;
		transform.localScale = new Vector3 (transform.localScale.x * -1, 1, 1);
	
	
	}
}
