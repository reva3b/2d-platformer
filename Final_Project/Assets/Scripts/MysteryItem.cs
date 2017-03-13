/*
 Author: Pow Vang
 Purpose: This script initializes the mystery item and has a onTrigger function that will notify the mystery item manager which power to give to the player.
 
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MysteryItem : MonoBehaviour
{
    [SerializeField] // private variables of each powers
    private bool increaseSpeed = false, increaseHealth = false, shield = false,
    gainWeapon = false, decreaseSpeed = false, cantJump = false, moreEnemies = false, decreaseHealth = false,
    loseWeapon = false, immortaility = false;
    [SerializeField]
    private bool superJump = false;
    [SerializeField]
    private float mysteryItemLength; 
    private bool mysteryItemActive;
    public MysteryItemDisplay display;
    public static MysteryItemManager theMysteryItemManager;
    // Use this for initialization
    void Start()
    {
        theMysteryItemManager = FindObjectOfType<MysteryItemManager>();
        display = FindObjectOfType<MysteryItemDisplay>();
    }

    void Awake()
    {
        int randomPowerSelector = Random.Range(0, 12);
        switch (randomPowerSelector) // on the start of each levels, a random power will be generated
        {

            case 0:
                increaseSpeed = true;
                break;
            case 1:
                increaseHealth = true;
                break;
            case 2:
                shield = true;
                break;
            case 3:
                gainWeapon = true;
                break;
            case 4:
                decreaseSpeed = true;
                break;
            case 5:
                decreaseHealth = true;
                break;
            case 6:
                cantJump = true;
                break;
            case 7:
                moreEnemies = true;
                break;
            case 8:
                decreaseHealth = true;
                break;
            case 9:
                superJump = true;
                break;
            case 10:
                loseWeapon = true;
                break;
            case 11:
                immortaility = true;
                break;
        }
    }

        void OnTriggerEnter2D(Collider2D other) // if the player touches the mystery item, then it'll call to the mystery item manager to alter the player's stats
    {
        if (other.tag == "Player" && other.tag != "Enemy")
        {
            Destroy(gameObject);
            display.displayOn = true;
            theMysteryItemManager.ActivateMysteryItem(increaseSpeed, superJump, increaseHealth, shield, gainWeapon, decreaseSpeed, cantJump, moreEnemies, decreaseHealth, loseWeapon, mysteryItemLength, immortaility);
        }
        gameObject.SetActive(false);
    }
}
