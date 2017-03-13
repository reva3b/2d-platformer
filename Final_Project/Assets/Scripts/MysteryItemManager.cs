/*
 Author: Pow Vang
 Purpose: This script is in charge of accessing and altering player stats as well as calling functions to spawn enemies
 
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MysteryItemManager : MonoBehaviour
{
    public bool increaseSpeed, superJump, increaseHealth, shield,
    gainWeapon, decreaseSpeed, cantJump, moreEnemies, decreaseHealth,
    loseWeapon, immortality;


    private bool mysteryItemActive;
    private float mysteryItemLengthCounter;
    private PlayerControl thePlayerControlManager;
    private float normalMovementSpeed; //default movement speed
    private float normalJumpForce; // default jump 
    public EnemyManager spawnEnemies;

    // Use this for initialization
    void Start()
    { 
        thePlayerControlManager = FindObjectOfType<PlayerControl>();
        spawnEnemies = FindObjectOfType<EnemyManager>();

    }

    // Update is called once per frame
    void Update() //once the mystery item is activated, this function will update the player stats
    {
        if (mysteryItemActive == true)
        {
            mysteryItemLengthCounter -= Time.deltaTime;
            Debug.Log("delta time: " + mysteryItemLengthCounter);
            if (increaseSpeed) //increase player's speed by 1.5
            {
                thePlayerControlManager.PlayerMovementSpeed = normalMovementSpeed * 1.5f;
            }
            if (superJump) //increase player's jump force by 1.5
                thePlayerControlManager.PlayerJumpForce = normalJumpForce * 1.5f;
            if (decreaseSpeed) // decrease player's speed by half
                thePlayerControlManager.PlayerMovementSpeed = normalMovementSpeed * .5f;
            if (cantJump) // decrease player's jump by half
                thePlayerControlManager.PlayerJumpForce = 0;
            if (increaseHealth) // increase the player's health by a random number between 25-74
            {
                int randNum = Random.Range(25, 75);
                PlayerControl.currentPlayer.Health += randNum;
                if (PlayerControl.currentPlayer.Health > 100)
                    PlayerControl.currentPlayer.Health = 100;
                mysteryItemActive = false;
            }
            if (decreaseHealth) // decrease the player's health by a random number between 10-29
            {
                int randNum = Random.Range(10, 30);
                if (immortality == false)
                    PlayerControl.currentPlayer.Health -= randNum;
                //PlayerControl.currentPlayer.Health = -5;
                if (PlayerControl.currentPlayer.Health <= 0)
                {
                    PlayerControl.currentPlayer.Health = 1;
                    //thePlayerControlManager.PlayerTakeDamage();
                    //thePlayerControlManager.WhenPlayerIsDead();
                }
                mysteryItemActive = false;
            }
            if (shield) // increase player's shield by a random number between 10-49
            {
                int randNum = Random.Range(10, 50);
                PlayerControl.currentPlayer.Shield += randNum;
                if (PlayerControl.currentPlayer.Shield > 50)
                    PlayerControl.currentPlayer.Shield = 50;
                mysteryItemActive = false;
            }
            if (gainWeapon) // player gains a weapon
            {
                thePlayerControlManager.IsPlayerGunAttack = true;
                mysteryItemActive = false;
            }
            if (loseWeapon) // player loses a weapon
            {
                thePlayerControlManager.IsPlayerGunAttack = false;
            }
            if (moreEnemies) // spawn more enemy 
            {
                spawnEnemies.Spawn();
                //EnemyManager.Spawn();
                mysteryItemActive = false;
            }
            if (immortality) // the player becomes an immortal for a short time
            {
                thePlayerControlManager.IsPlayerImmortal = true;
            }
            if (mysteryItemLengthCounter <= 0)
            {   // return the player's stat back to normal
                thePlayerControlManager.PlayerJumpForce = normalJumpForce;
                thePlayerControlManager.PlayerMovementSpeed = normalMovementSpeed;
                thePlayerControlManager.IsPlayerImmortal = false;
                thePlayerControlManager.IsPlayerGunAttack = false;
                mysteryItemActive = false; // set the mystery item active to false to exit the loop
            }
        }
    }

    public void ActivateMysteryItem(bool incSpeed, bool sJump, bool incHealth, bool SHield, bool gainWep, bool decSpeed, bool cntJump, bool mEnemies, bool decHealth, bool loseWep, float time, bool immort)
    { //this function is called by the mystery item class only and will initialize which power to access the player stats 

        increaseSpeed = incSpeed;
        superJump = sJump;
        increaseHealth = incHealth;
        shield = SHield;
        gainWeapon = gainWep;
        decreaseSpeed = decSpeed;
        cantJump = cntJump;
        moreEnemies = mEnemies;
        decreaseHealth = decHealth;
        loseWeapon = loseWep;
        mysteryItemLengthCounter = time;
        immortality = immort;


        normalMovementSpeed = thePlayerControlManager.PlayerMovementSpeed; // grab the player's normal movment speed
        normalJumpForce = thePlayerControlManager.PlayerJumpForce; // grabs the player's normal jump force
        mysteryItemActive = true;
    }
}

