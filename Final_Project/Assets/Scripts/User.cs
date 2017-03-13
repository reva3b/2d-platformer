using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class User : Char
{
	

	public override void Death ()
	{
		
		EnemyAnimator.SetTrigger("Idle");
		Health = 30;

	}



	
	public override bool IsDead 
	{
		get 
		{
			return Health <= 0;
		}
	}

	public override IEnumerator TakeDamage()
	{
		Health -= 10;
		if (!IsDead)
		{
			EnemyAnimator.SetTrigger ("damage");
		}
		else
		{
			EnemyAnimator.SetLayerWeight (1, 0);
			EnemyAnimator.SetTrigger("die");
		}
			
		yield return null;
	}

    public static PlayerStats currentPlayer = new PlayerStats();
    public Rigidbody2D PlayerRigidBody;
	private Animator PlayerAnimator;
    [SerializeField]
    private Transform KunaiPosition; // appears in Player's inspector
    [SerializeField]
    private GameObject KunaiPrefab; // appears in Player's inspector
    [SerializeField]
    private EdgeCollider2D PlayerKnifeCollider; // appears in Player's inspector
    [SerializeField]
    private List<string> DamageSourcesForPlayer;
    [SerializeField]
    private Transform[] PlayerGroundPoints; // appears in Player's inspector
    [SerializeField]
    private LayerMask WhatIsGroundForPlayer; // appears in Player's inspector
    [SerializeField]
    public float PlayerMovementSpeed; 
	[SerializeField]
    private float PlayerGroundRadius; // appears in Player's inspector
    [SerializeField]
    //private float PlayerJumpForce; // appears in Player's inspector
    public float PlayerJumpForce; // POW'S EDIT: I CHANGED IT TO PUBLIC SO THAT I CAN ACCESS THE PLAYER'S JUMP
    private bool IsPlayerFacingRight;
	public bool IsPlayerAttacking { get; set; }
    private bool IsPlayerSliding;
    private bool PlayerIsGrounded;
    private bool ShouldPlayerJump;
    private bool IsPlayerDead;

    /// <summary>
    /// 
    /// NOTE TO POW:
    /// Through MysterItem class, change IsPlayerGunAttack to true or false depending on whether the player gets the weapon power up
    /// 
    /// If this is set to true, the player can use gun, else the player can only use knife to attack (when pressing space bar)
    /// 
    /// The power up should set the value to true. after some time it should reset the value of IsPlayerGunAttack to false
    /// 
    /// (keep the serializbale field option as it is!!!!!!!!)
    /// </summary>
    [SerializeField]
    public bool IsPlayerGunAttack; // appears in Player's inspector

    [SerializeField]
    private bool PlayerAirControl; // appears in Player's inspector - if air control is set to true, the player can move in the air as well

    // Use this for initialization
	 void Start()
    {
        IsPlayerFacingRight = true; // player faces right by default
        PlayerRigidBody = GetComponent<Rigidbody2D>();
        PlayerAnimator = GetComponent<Animator>();
    }

    // Update is called once per frame
    void Update()
    {
        // only take the player's input if the player sprite is not dead in the game
        if (IsPlayerDead == false)
            HandlePlayerKeyPress();

        // have the if statement here that moves the player to the checkpoint position if the player is dead - or falls off the screen
    }

    // FixedUpdate is called every fixed framerate frame
    void FixedUpdate()
    {
        // only perform the functions if the player is not dead
        if (IsPlayerDead == false)
        {
            float horizontalAxisValue = Input.GetAxis("Horizontal"); // stores value of horizontal axis based on keypress - left / right arrow

            PlayerIsGrounded = IsPlayerGrounded();

            IsPlayerDead = CheckIfPlayerDead();

            MovePlayer(horizontalAxisValue);
            FlipPlayer(horizontalAxisValue);
            PlayerAttacks();
            HandlePlayerAnimatorLayers();
        }

        ResetAllPlayerValues();
    }

    // This function changes the settings of the different layers present inside the Player Animator - Ground Layer, Air Layer etc.
    private void HandlePlayerAnimatorLayers()
    {
        // if player is not on the ground - i.e. if the player is in the air, change the Air Layer's weight to 1 (ACTIVATE) --> change weight of layer 1 to 1
        if (PlayerIsGrounded == false)
            PlayerAnimator.SetLayerWeight(1, 1);
        else
            PlayerAnimator.SetLayerWeight(1, 0); // or else change the weight of layer 1 to 0 -- when the player is on the ground
    }

    // This functions handles all the keypress of the player and its respective functionality within the game - Keep Pressing Space Key to Attack etc.
    private void HandlePlayerKeyPress()
    {
        // if the player keeps pressing Space key, then set Player Attack to true
        if (Input.GetKey(KeyCode.Space) == true)
        {
            IsPlayerAttacking = true;
            PlayerKnifeCollider.enabled = true; // before attacking, enable the player's knife's edge collider
        }

        // if the player presses Down Arrow Key once, then set Player Slide to true
        if (Input.GetKeyDown(KeyCode.DownArrow) == true)
            IsPlayerSliding = true;

        // if the player presses Up Arrow key once, they'll jump once
        if (Input.GetKeyDown(KeyCode.UpArrow) == true)
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
        // if the player sprite is falling towards the ground, activate the Jump_DOWN_Player animation clip - landing animation
        if (PlayerRigidBody.velocity.y < 0)
            PlayerAnimator.SetBool("land_player_animator", true); // set the land parameter inside the animator to true -- to activate the Jump_DOWN_Player animation clip

        // only move the player if the player is not sliding, and if the player is not attacking (knife + gun), and if the player is not jumping (player is grounded or has air control)
        if ((PlayerAnimator.GetBool("slide_player_animator") == false) && (this.PlayerAnimator.GetCurrentAnimatorStateInfo(0).IsName("Attack_Knife_Player") == false) && (this.PlayerAnimator.GetCurrentAnimatorStateInfo(0).IsName("Attack_Gun_Player") == false) && ((PlayerIsGrounded == true) || (PlayerAirControl == true)))
            PlayerRigidBody.velocity = new Vector2(horizontalAxisValue * PlayerMovementSpeed, PlayerRigidBody.velocity.y); // moves the player character along x axis based on keypress (left / right arrow)

        // if the player is attacking - KNIFE, do not move the player
        else if (this.PlayerAnimator.GetCurrentAnimatorStateInfo(0).IsName("Attack_Knife_Player") == true)
            PlayerRigidBody.velocity = new Vector2(0, 0);

        // if the player is attacking - GUN, do not move the player
        else if (this.PlayerAnimator.GetCurrentAnimatorStateInfo(0).IsName("Attack_Gun_Player") == true)
            PlayerRigidBody.velocity = new Vector2(0, 0);

        // if the player is standing on the ground, and if the player is supposed to jump
        if ((PlayerIsGrounded == true) && (ShouldPlayerJump == true))
        {
            PlayerIsGrounded = false; // player should not be grounded anymore
            PlayerRigidBody.AddForce(new Vector2(0, PlayerJumpForce)); // x component is set to 0 becasue this is Jump
            PlayerAnimator.SetTrigger("jump_player_animator"); // trigger the jumping animation while jumping
        }

        // if player slide is set to true, and if the player sprite is not already sliding
        if ((IsPlayerSliding == true) && (this.PlayerAnimator.GetCurrentAnimatorStateInfo(0).IsName("Slide_Player") == false))
            PlayerAnimator.SetBool("slide_player_animator", true);

        // if the slide animator is not switched ON, reset the slide parameter to false i.e. once the player sprite is done sliding, reset the parameter to false
        else if ((IsPlayerSliding == false) && (this.PlayerAnimator.GetCurrentAnimatorStateInfo(0).IsName("Slide_Player") == true))
            PlayerAnimator.SetBool("slide_player_animator", false);

        PlayerAnimator.SetFloat("speed_player_animator", Mathf.Abs(horizontalAxisValue)); // to change idle animation to run animation, and run animation to idle animation
    }

    // This function flips the player sprite left or right depending on keypress of the user / player
    private void FlipPlayer(float horizontalAxisValue)
    {
        // if moving right, and player NOT facing right, Flip Player to Right (OR) if moving left, and player facing right, Flip Player to Left 
        if (((horizontalAxisValue > 0) && (IsPlayerFacingRight == false)) || ((horizontalAxisValue < 0) && (IsPlayerFacingRight == true)))
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

    // This function takes care of all the attacks that the player sprite can do -- Attack with Knife, Attack with Gun
    private void PlayerAttacks()
    {
        /*
		// enable the player's knife's edge collider if the player is attacking, and if the player is not using a gun to attack
		if ( (Input.GetKeyDown (KeyCode.Space) == true) && (IsPlayerGunAttack == false))
			PlayerKnifeCollider.enabled = true;

		// enable the player's knife's edge collider if the player is attacking, and if the player is not using a gun to attack
		if ( (Input.GetKey (KeyCode.Space) == true) && (IsPlayerGunAttack == false))
			PlayerKnifeCollider.enabled = true;
		*/

        // disable the player's knife's edge collider if the player is not attacking, or if the player is using a gun to attack
        if ((Input.GetKey(KeyCode.Space) == false) || (IsPlayerGunAttack == true))
            PlayerKnifeCollider.enabled = false;

        // disable the player's knife's edge collider if the player is not attacking, or if the player is using a gun to attack
        if ((Input.GetKeyDown(KeyCode.Space) == false) || (IsPlayerGunAttack == true))
            PlayerKnifeCollider.enabled = false;

        // if the gun attack is set to false, and if the player attack is set to true, and if the player is on ground, and if the player attack animation is not already Triggered, trigger the player KNIFE attack animation
        if ((IsPlayerGunAttack == false) && (IsPlayerAttacking == true) && (PlayerIsGrounded == true) && (this.PlayerAnimator.GetCurrentAnimatorStateInfo(0).IsName("Attack_Knife_Player") == false))
        {
            PlayerAnimator.SetTrigger("attack_knife_player_animator");
            PlayerRigidBody.velocity = new Vector2(0, 0);
            PlayerKnifeCollider.enabled = false; // after attacking, disable the player's knife's edge collider
        }

        // if gun attack is set to true, and if the player attack is set to true, and if the player is on ground, and if the player attack animation (GUN) is not already Triggered, trigger the player GUN attack animation
        if ((IsPlayerGunAttack == true) && (IsPlayerAttacking == true) && (PlayerIsGrounded == true) && (this.PlayerAnimator.GetCurrentAnimatorStateInfo(0).IsName("Attack_Gun_Player") == false))
        {
            PlayerKnifeCollider.enabled = false; // since this is gun attack, disable the player's knife's edge collider
            PlayerAnimator.SetTrigger("attack_gun_player_animator");
            PlayerRigidBody.velocity = new Vector2(0, 0);
            FireBullet();
        }
    }

    // This function checks if the player sprite is grounded on the scene, and returns a bool value
    private bool IsPlayerGrounded()
    {
        if (PlayerRigidBody.velocity.y <= 0)
        {
            foreach (Transform point in PlayerGroundPoints)
            {
                Collider2D[] PlayerColliders = Physics2D.OverlapCircleAll(point.position, PlayerGroundRadius, WhatIsGroundForPlayer);

                for (int i = 0; i < PlayerColliders.Length; i++)
                {
                    // if the current collider is colliding with the player
                    if (PlayerColliders[i].gameObject != gameObject)
                    {
                        PlayerAnimator.ResetTrigger("jump_player_animator"); // if the player is grounded, reset the jump trigger in animator
                        PlayerAnimator.SetBool("land_player_animator", false); // after landing, set the land parameter inside animator to false
                        return true;
                    }
                }
            }
        }
        return false;
    }

	public void FireBullet()
    {
        // if player is facing right, bullet direction is right
        if (IsPlayerFacingRight == true)
        {
            GameObject TempObj = (GameObject)Instantiate(KunaiPrefab, BulletPosition.position, Quaternion.Euler(new Vector3(0, 0, 0)));
            TempObj.GetComponent<Bullet>().Initialize(Vector2.right); // because the player is facing right
        }

        // if player is facing left, bullet direction is left (rotate it by -180)
        else if (IsPlayerFacingRight == false)
        {
            GameObject TempObj = (GameObject)Instantiate(KunaiPrefab, BulletPosition.position, Quaternion.Euler(new Vector3(0, 0, -180)));
            TempObj.GetComponent<Bullet>().Initialize(Vector2.left); // because the player is facing left
        }
    }

    // Returns true if player is dead, returns false if player is not dead
    public bool CheckIfPlayerDead()
    {
        bool result = false;

        // if the player's health is less than or equal to 0, the player is dead
        if (currentPlayer.Health <= 0)
        {
            Debug.Log("Player is Dead with Health: " + currentPlayer.Health);
            result = true;
        }

        // if the player's health is greater than 0, the player is not dead
        else if (currentPlayer.Health > 0)
        {
            Debug.Log("Player is NOT DEAD with Health: " + currentPlayer.Health);
            result = false;
        }

        return result;
    }

    // Reduces the Player's health or shield value by 10- and triggers either the Damage or Dead animation accordingly
    public void PlayerTakeDamage()
    {
        // if the shield is greater than zero, subtract the shield by 10, and keep the player's health unchanged
        if (currentPlayer.Shield > 0)
        {
            currentPlayer.Shield = currentPlayer.Shield - 10;
            Debug.Log ("After Damage: Health = " + currentPlayer.Health + " Shield = " + currentPlayer.Shield);
        }

        // if the shield is zero or less than 0, the game should reduce player's health by 10
        if ( (currentPlayer.Shield == 0) || (currentPlayer.Shield < 0) )
        {
            currentPlayer.Health = currentPlayer.Health - 10;
            Debug.Log("After Damage: Health = " + currentPlayer.Health + " Shield = " + currentPlayer.Shield);
        }
        
        // if player is dead, trigger the Dead animation of player
        if ((IsPlayerDead == true) || (currentPlayer.Health == 0) || (currentPlayer.Health < 0) )
        {
            PlayerAnimator.SetTrigger("dead_player_animator");
        }

        // if player is not dead, the player is supposed to take damage - so trigger the Damage animation of player
        if ( (IsPlayerDead == false) || (currentPlayer.Health > 0) )
        {
            PlayerAnimator.SetLayerWeight(1, 0); // if the player dies while jumping, the player should not do the land animation - thus activate the ground layer so that the dead animation is played only on ground
            PlayerAnimator.SetTrigger("damage_player_animator");
        }
    }

    /*
	public void OnTriggerEnter2D (Collision2D other)
	{
		// use this function to affect the player's health if the player is touched by a triggered box collider 2d like the enemy's knife etc.
		// use the DamageSourcesForPlayerList inside the Player's inspector - add all the things that the player could get damaged from
		// this function has a similar implementation to the OnCollisionEnter2D first if statement
	}
	*/

	public void OnCollisionEnter2D(Collision2D other)
    {
        // if the player collides with an obstacle (stationary + non-stationary objects) , the player should take damage
        if (DamageSourcesForPlayer.Contains(other.gameObject.tag)) // if the object has a tag that is within list DamageSourcesForPlayer list, the player should take damage 
        {
            PlayerTakeDamage();
        }

        // if the player collides with a coin, destory the coin object, and increase the player's coin count
        if (other.gameObject.tag == "Coin")
        {
            Destroy(other.gameObject);
            currentPlayer.CoinCount++;
        }
    }
}