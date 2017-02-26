/*
	Author: Revathi Bhuvaneswari
	
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerControl : MonoBehaviour 
{
	private static PlayerControl instance;

	public static PlayerControl Instance
	{
		get 
		{
			if (instance == null) 
			{
				instance = GameObject.FindObjectOfType <PlayerControl> (); // setting reference between instance and PlayerControl script
			}
			return Instance;
		}
	}

	public static PlayerStats currentPlayer;

	private Animator PlayerAnimator;

	[SerializeField]
	private Transform[] PlayerGroundPoints; // appears in Player's inspector

	[SerializeField]
	private LayerMask WhatIsGroundForPlayer; // appears in Player's inspector

	[SerializeField]
    //private float PlayerMovementSpeed; // appears in Player's inspector
    public float PlayerMovementSpeed; // POW'S EDIT: I CHANGED IT TO PUBLIC SO THAT I CAN ACCESS THE PLAYER SPEED
    
	[SerializeField]
	private float PlayerGroundRadius; // appears in Player's inspector

	[SerializeField]
    //private float PlayerJumpForce; // appears in Player's inspector
    public float PlayerJumpForce; // POW'S EDIT: I CHANGED IT TO PUBLIC SO THAT I CAN ACCESS THE PLAYER'S JUMP

    private bool IsPlayerFacingRight;

	[SerializeField]
	private bool PlayerAirControl; // appears in Player's inspector - if air control is set to true, the player can move in the air as well

	public Rigidbody2D PlayerRigidBody { get; set; } // this is a property

	public bool PlayerAttack { get; set; } // this is a property

	public bool PlayerSlide { get; set; } // this is a property

	public bool PlayerJump { get; set; } // this is a property

	public bool PlayerOnGround { get; set; } // this is a property

	// Use this for initialization
	void Start () 
	{
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

		PlayerOnGround = IsPlayerGrounded ();

		MovePlayer (horizontalAxisValue);

		FlipPlayer (horizontalAxisValue);

		HandlePlayerAnimatorLayers ();
	}

	// This function changes the settings of the different layers present inside the Player Animator - Ground Layer, Air Layer etc.
	private void HandlePlayerAnimatorLayers()
	{
		// if player is not on the ground - i.e. if the player is in the air, change the Air Layer's weight to 1 (ACTIVATE) --> change weight of layer 1 to 1
		if (PlayerOnGround == false)
			PlayerAnimator.SetLayerWeight (1, 1);
		else
			PlayerAnimator.SetLayerWeight (1, 0); // or else change the weight of layer 1 to 0 -- when the player is on the ground
	}

	// This functions handles all the keypress of the player and its respective functionality within the game - Keep Pressing Space Key to Attack etc.
	private void HandlePlayerKeyPress()
	{
		// if the player keeps pressing Space key, then set Player Attack to true
		if (Input.GetKey (KeyCode.Space) == true) 
		{
			PlayerAnimator.SetTrigger ("attack_player_animator");
		}
			
		// if the player presses Down Arrow Key once, then set Player Slide to true
		if (Input.GetKeyDown (KeyCode.DownArrow) == true) 
		{
			PlayerAnimator.SetTrigger ("slide_player_animator");
		}

		// if the player presses Up Arrow key once, they'll jump once
		if (Input.GetKeyDown (KeyCode.UpArrow) == true)
		{
			PlayerAnimator.SetTrigger ("jump_player_animator");
		}
	}

	// This function moves the player sprite along the x-axis - Run, Slide, Jump
	private void MovePlayer(float horizontalAxisValue)
	{
		// if the player is falling - trigger the landing animation - set landing to true
		if (PlayerRigidBody.velocity.y < 0) 
		{
			PlayerAnimator.SetBool ("land_player_animator", true);
		}

		// move the player, if the player is not attacking, and if the player is not sliding, and if the player is grounded or air control is on
		if ( (PlayerAttack == false) && (PlayerSlide == false) && ((PlayerOnGround == true) || (PlayerAirControl == true)) ) 
		{
			PlayerRigidBody.velocity = new Vector2 (horizontalAxisValue * PlayerMovementSpeed, PlayerRigidBody.velocity.y); // only move the player with speed for x axis, for y axis use the default value
		}

		// make the player jump, if the player is supposed to jump, and if the player's y axis velocity is set to 0
		if ( (PlayerJump == true) && (PlayerRigidBody.velocity.y == 0) ) 
		{
			PlayerRigidBody.AddForce (new Vector2 (0, PlayerJumpForce)); // move the player only along y axis - jump
		}

		PlayerAnimator.SetFloat ("speed_player_animator", Mathf.Abs (horizontalAxisValue)); // change the value of speed_player_animator parameter inside the player animator
	}

	// This function flips the player sprite left or right depending on keypress of the user / player
	private void FlipPlayer(float horizontalAxisValue)
	{
		// if moving right, and player NOT facing right, Flip Player to Right (OR) if moving left, and player facing right, Flip Player to Left 
		if ( ((horizontalAxisValue > 0) && (IsPlayerFacingRight == false)) || ((horizontalAxisValue < 0) && (IsPlayerFacingRight == true)) )
		{
			Vector3 PlayerScale = transform.localScale;

			if (IsPlayerFacingRight == true)
				IsPlayerFacingRight = false;
			else if (IsPlayerFacingRight == false)
				IsPlayerFacingRight = true;
			
			PlayerScale.x = PlayerScale.x * (-1); // only change the x component - flip player along x axis
			transform.localScale = PlayerScale;
		}
	}

	// This function checks if the player sprite is grounded on the scene, and returns a bool value
	private bool IsPlayerGrounded()
	{
		if (PlayerRigidBody.velocity.y <= 0) 
		{
			foreach (Transform point in PlayerGroundPoints) 
			{
				Collider2D[] PlayerColliders = Physics2D.OverlapCircleAll (point.position, PlayerGroundRadius, WhatIsGroundForPlayer);

				for (int i = 0; i < PlayerColliders.Length; i++) 
				{
					// if the current collider is colliding with the player
					if (PlayerColliders [i].gameObject != gameObject) 
					{
						return true;
					}
				}
			}
		}
		return false;
	}

    public void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.tag == "Coin")
            Destroy(other.gameObject);
    }
}