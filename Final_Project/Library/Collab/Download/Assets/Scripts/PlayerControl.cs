/*
	Author: Revathi Bhuvaneswari
	
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControl : CharacterEnemyScript 
{
	public static PlayerStats currentPlayer;

	private Rigidbody2D PlayerRigidBody;
	private Animator PlayerAnimator;

	[SerializeField]
	private Transform[] PlayerGroundPoints; // appears in Player's inspector

	[SerializeField]
	private LayerMask WhatIsGroundForPlayer; // appears in Player's inspector

	[SerializeField]
	private float PlayerMovementSpeed; // appears in Player's inspector

	[SerializeField]
	private float PlayerGroundRadius; // appears in Player's inspector

	[SerializeField]
	private float PlayerJumpForce; // appears in Player's inspector


	private bool IsPlayerAttacking;
	private bool IsPlayerSliding;
	private bool PlayerIsGrounded;
	private bool ShouldPlayerJump;

	[SerializeField]
	private bool PlayerAirControl; // appears in Player's inspector - if air control is set to true, the player can move in the air as well

	// Use this for initialization
	public override  void Start () 
	{
		Debug.Log ("PlayerStart");
		base.Start ();
		IsPlayerFacingRight = true; // player faces right by default
		PlayerRigidBody = GetComponent<Rigidbody2D> ();
		PlayerAnimator = GetComponent<Animator> ();
	}

	// Update is called once per frame
	void Update()
	{
		HandlePlayerKeyPress ();
	}
	
	// FixedUpdate is called every fixed framerate frame
	void FixedUpdate () 
	{
		float horizontalAxisValue = Input.GetAxis ("Horizontal"); // stores value of horizontal axis based on keypress - left / right arrow

		PlayerIsGrounded = IsPlayerGrounded ();

		MovePlayer (horizontalAxisValue);
		FlipPlayer (horizontalAxisValue);
		PlayerAttacks ();

		ResetAllPlayerValues ();
	}

	// This functions handles all the keypress of the player and its respective functionality within the game - Keep Pressing Space Key to Attack etc.
	private void HandlePlayerKeyPress()
	{
		// if the player keeps pressing Space key, then set Player Attack to true
		if (Input.GetKey (KeyCode.Space) == true) 
			IsPlayerAttacking = true;

		// if the player keeps pressing Down Arrow Key, then set Player Slide to true
		if (Input.GetKey (KeyCode.DownArrow) == true) 
			IsPlayerSliding = true;

		// if the player presses Up Arrow key once, they'll jump once
		if (Input.GetKeyDown (KeyCode.UpArrow) == true)
			ShouldPlayerJump = true;
	}

	// This function resets all the player sprite values to default before exiting the scene
	private void ResetAllPlayerValues()
	{
		IsPlayerAttacking = false; // reset player attack to false
		IsPlayerSliding = false; // reset player slide to false
		ShouldPlayerJump = false; // reset player jump to false
	}

	// This function moves the player sprite along the x-axis - Run, Slide, Jump
	private void MovePlayer(float horizontalAxisValue)
	{
		// only move the player if the player is not sliding, and if the player is not attacking, and if the player is not jumping (player is grounded or has air control)
		if ( (PlayerAnimator.GetBool("slide_player_animator") == false) && (this.PlayerAnimator.GetCurrentAnimatorStateInfo (0).IsTag ("Attack") == false) && ((PlayerIsGrounded == true) || (PlayerAirControl == true)) )
			PlayerRigidBody.velocity = new Vector2 (horizontalAxisValue * PlayerMovementSpeed, PlayerRigidBody.velocity.y); // moves the player character along x axis based on keypress (left / right arrow)

		// if the player is attacking, do not move the player
		else if (this.PlayerAnimator.GetCurrentAnimatorStateInfo (0).IsTag ("Attack") == true) 
			PlayerRigidBody.velocity = new Vector2 (0, 0);

		// if the player is standing on the ground, and if the player is supposed to jump
		if ((PlayerIsGrounded == true) && (ShouldPlayerJump == true)) 
		{
			PlayerIsGrounded = false; // player should not be grounded anymore
			PlayerRigidBody.AddForce (new Vector2 (0, PlayerJumpForce)); // x component is set to 0 becasue this is Jump
		}

		// if player slide is set to true, and if the player sprite is not already sliding
		if ((IsPlayerSliding == true) && (this.PlayerAnimator.GetCurrentAnimatorStateInfo (0).IsName ("Slide_Player") == false)) 
			PlayerAnimator.SetBool ("slide_player_animator", true);

		// if the slide animator is not switched ON, reset the slide parameter to false i.e. once the player sprite is done sliding, reset the parameter to false
		else if ((IsPlayerSliding == false) && (this.PlayerAnimator.GetCurrentAnimatorStateInfo (0).IsName ("Slide_Player") == true)) 
			PlayerAnimator.SetBool ("slide_player_animator", false);

		PlayerAnimator.SetFloat ("speed_player_animator", Mathf.Abs (horizontalAxisValue)); // to change idle animation to run animation, and run animation to idle animation
	}

	// This function flips the player sprite left or right depending on keypress of the user / player
	private void FlipPlayer(float horizontalAxisValue)
	{
		// if moving right, and player NOT facing right, Flip Player to Right (OR) if moving left, and player facing right, Flip Player to Left 
		if ( ((horizontalAxisValue > 0) && (IsPlayerFacingRight == false)) || ((horizontalAxisValue < 0) && (IsPlayerFacingRight == true)) )
		{
			{
				ChangeDirection ();
			}


			Vector3 PlayerScale = transform.localScale;

			if (IsPlayerFacingRight == true)
				IsPlayerFacingRight = false;
			else if (IsPlayerFacingRight == false)
				IsPlayerFacingRight = true;
			
			PlayerScale.x = PlayerScale.x * (-1); // only change the x component - flip player along x axis
			transform.localScale = PlayerScale;
		}
	}

	// This function takes care of all the attacks that the player sprite can do -- Attack with Knife, Attack with Gun
	private void PlayerAttacks()
	{
		// if the player attack is set to true, and if the player attack animation is not already Triggered, trigger the player attack animation
		if ((IsPlayerAttacking == true) && (this.PlayerAnimator.GetCurrentAnimatorStateInfo (0).IsTag ("Attack") == false))
		{
			PlayerAnimator.SetTrigger ("attack_player_animator");
			PlayerRigidBody.velocity = new Vector2 (0,0);
		}
	}

	private bool IsPlayerGrounded()
	{
		if (PlayerRigidBody.velocity.y <= 0) 
		{
			foreach (Transform point in PlayerGroundPoints) 
			{
				Collider2D[] PlayerColliders = Physics2D.OverlapCircleAll (point.position, PlayerGroundRadius, WhatIsGroundForPlayer);

				for (int i = 0; i < PlayerColliders.Length; i++)
					// if the current collider is colliding with the player
					if (PlayerColliders [i].gameObject != gameObject) 
						return true;
			}
		}
		return false;
	}
}
