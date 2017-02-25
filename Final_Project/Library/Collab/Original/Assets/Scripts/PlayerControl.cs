/*
	Author: Revathi Bhuvaneswari
	
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControl : MonoBehaviour 
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

	private bool IsPlayerFacingRight;
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
		HandlePlayerAnimatorLayers ();

		ResetAllPlayerValues ();
	}

	// This function changes the settings of the different layers present inside the Player Animator - Ground Layer, Air Layer etc.
	private void HandlePlayerAnimatorLayers()
	{
		// if player is not on the ground - i.e. if the player is in the air, change the Air Layer's weight to 1 (ACTIVATE) --> change weight of layer 1 to 1
		if (PlayerIsGrounded == false)
			PlayerAnimator.SetLayerWeight (1, 1);
		else
			PlayerAnimator.SetLayerWeight (1, 0); // or else change the weight of layer 1 to 0 -- when the player is on the ground
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
		/*
		// if the player sprite is falling towards the ground, activate the Jump_DOWN_Player animation clip - landing animation
		if (PlayerRigidBody.velocity.y < 0)
			PlayerAnimator.SetBool ("land_player_animator", true); // set the land parameter inside the animator to true -- to activate the Jump_DOWN_Player animation clip
		*/

		// only move the player if the player is not sliding, and if the player is not attacking, and if the player is not jumping (player is grounded or has air control)
		//if ( (PlayerAnimator.GetBool("slide_player_animator") == false) && (this.PlayerAnimator.GetCurrentAnimatorStateInfo (0).IsTag ("Attack") == false) &&
	}
}