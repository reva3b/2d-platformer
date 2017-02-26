using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MysteryItem : MonoBehaviour {
    [SerializeField]
    private bool increaseSpeed, increaseHealth, shield,
    gainWeapon, decreaseSpeed, cantJump, moreEnemies, decreaseHealth,
    loseWeapon;
    [SerializeField]
    private bool superJump;
    [SerializeField]
    private float mysteryItemLength;
    private bool mysteryItemActive;
    private MysteryItemManager theMysteryItemManager;
    // Use this for initialization
    void Start () {
        theMysteryItemManager = FindObjectOfType<MysteryItemManager>();
	}

    void Awake()
    {
        //int randomPowerSelector = Random.Range(0,10);
        int randomPowerSelector = Random.Range(0, 5);
        switch (randomPowerSelector)
        {
            case 0: increaseSpeed = true;
                break;
            case 1: superJump = true;
                break;
            case 2: decreaseSpeed = true;
                break;
            case 3: cantJump = true;
                break;
            /*case 0: increaseSpeed = true;
                break;
            case 1: increaseHealth = true;
                break;
            case 2: shield = true;
                break;
            case 3: gainWeapon = true;
                break;
            case 4: decreaseSpeed = true;
                break;
            case 5: decreaseHealth = true;
                break;
            case 6: cantJump = true;
                break;
            case 7: moreEnemies = true;
                break;
            case 8: decreaseHealth = true;
                break;
            case 9: superJump = true;
                break;*/
        }
    }

    void OnTriggerEnter2D(Collider2D other)
    {
        if ( other.name == "Player")
        {
            theMysteryItemManager.ActivateMysteryItem(increaseSpeed, superJump, increaseHealth, shield, gainWeapon, decreaseSpeed, cantJump, moreEnemies, decreaseHealth, loseWeapon, mysteryItemLength);
        }
        gameObject.SetActive(false);
    }
}
