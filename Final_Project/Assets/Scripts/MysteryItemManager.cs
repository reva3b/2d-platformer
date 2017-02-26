using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MysteryItemManager : MonoBehaviour {
    private bool increaseSpeed, superJump, increaseHealth, shield,
    gainWeapon, decreaseSpeed, cantJump, moreEnemies, decreaseHealth,
    loseWeapon;


    private bool mysteryItemActive;
    private float mysteryItemLengthCounter;
    private PlayerControl thePlayerControlManager;

    private float normalMovementSpeed; //default movement speed
    private float normalJumpForce; // default jump 
    // Use this for initialization
    void Start () {
        thePlayerControlManager = FindObjectOfType<PlayerControl>();
	}
	
	// Update is called once per frame
	void Update () {
        if (mysteryItemActive == true)
        {
            mysteryItemLengthCounter -= Time.deltaTime;
            if (increaseSpeed)
                thePlayerControlManager.PlayerMovementSpeed = normalMovementSpeed * 1.5f;
            if (superJump)
                thePlayerControlManager.PlayerJumpForce = normalJumpForce * 1.5f;
            if (decreaseSpeed)
                thePlayerControlManager.PlayerMovementSpeed = normalMovementSpeed * .5f;
            if (cantJump)
                thePlayerControlManager.PlayerJumpForce = 0;
            if (mysteryItemLengthCounter <= 0)
            {
                thePlayerControlManager.PlayerJumpForce = normalJumpForce;
                thePlayerControlManager.PlayerMovementSpeed = normalMovementSpeed;
                mysteryItemActive = false;
            }
        }
	}

    public void ActivateMysteryItem(bool incSpeed , bool sJump, bool incHealth, bool SHield, bool gainWep, bool decSpeed, bool cntJump, bool mEnemies, bool decHealth, bool loseWep, float time)
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



        normalMovementSpeed = thePlayerControlManager.PlayerMovementSpeed;
        normalJumpForce = thePlayerControlManager.PlayerJumpForce;
        mysteryItemActive = true;
    }
}
