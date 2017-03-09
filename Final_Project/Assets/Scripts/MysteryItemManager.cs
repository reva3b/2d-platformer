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
    }

    // Update is called once per frame
    void Update()
    {
        if (mysteryItemActive == true)
        {
            mysteryItemLengthCounter -= Time.deltaTime;
            Debug.Log("delta time: " + mysteryItemLengthCounter);
            if (increaseSpeed)
            {
                thePlayerControlManager.PlayerMovementSpeed = normalMovementSpeed * 1.5f;
            }
            if (superJump)
                thePlayerControlManager.PlayerJumpForce = normalJumpForce * 1.5f;
            if (decreaseSpeed)
                thePlayerControlManager.PlayerMovementSpeed = normalMovementSpeed * .5f;
            if (cantJump)
                thePlayerControlManager.PlayerJumpForce = 0;
            if (increaseHealth)
            {
                int randNum = Random.Range(25, 75);
                PlayerControl.currentPlayer.Health += randNum;
                if (PlayerControl.currentPlayer.Health > 100)
                    PlayerControl.currentPlayer.Health = 100;
                mysteryItemActive = false;
            }
            if (decreaseHealth)
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
            if (shield)
            {
                int randNum = Random.Range(50, 101);
                PlayerControl.currentPlayer.Shield += randNum;
                if (PlayerControl.currentPlayer.Shield > 100)
                    PlayerControl.currentPlayer.Shield = 100;
                mysteryItemActive = false;
            }
            if (gainWeapon)
            {
                //thePlayerControlManager.IsPlayerGunAttack = true;
                mysteryItemActive = false;
            }
            if (loseWeapon)
            {
                thePlayerControlManager.IsPlayerGunAttack = false;
            }
            if (moreEnemies)
            {
                //spawnEnemies.Spawn();
                //EnemyManager.Spawn();
                //mysteryItemActive = false;
            }
            if (immortality)
            {
                thePlayerControlManager.IsPlayerImmortal = true;
            }
            if (mysteryItemLengthCounter <= 0)
            {
                thePlayerControlManager.PlayerJumpForce = normalJumpForce;
                thePlayerControlManager.PlayerMovementSpeed = normalMovementSpeed;
                thePlayerControlManager.IsPlayerImmortal = false;
                thePlayerControlManager.IsPlayerGunAttack = true;
                mysteryItemActive = false;
            }
        }
    }

    public void ActivateMysteryItem(bool incSpeed, bool sJump, bool incHealth, bool SHield, bool gainWep, bool decSpeed, bool cntJump, bool mEnemies, bool decHealth, bool loseWep, float time, bool immort)
    {

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


        normalMovementSpeed = thePlayerControlManager.PlayerMovementSpeed;
        normalJumpForce = thePlayerControlManager.PlayerJumpForce;
        mysteryItemActive = true;
    }
}

