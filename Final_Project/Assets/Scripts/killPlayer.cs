/*
 Author: Pow Vang
 Purpose: This script is applied to the boulder or giant prefab which is meant to kill the player if the player comes into contact with the boulder or giant.
 NOTE: WE DICIDED NOT TO USE THIS SCRIPT BECAUSE IT'LL KILL THE PLAYER TOO EASILY, INSTEAD WE WENT FOR A ROUTE TO DAMAGE THE PLAYER INSTEAD OF KILLING THE PLAYER
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class killPlayer : MonoBehaviour
{

    // Use this for initialization
    void Start()
    {

    }


    public void OnCollisionEnter2D(Collision2D other)
    {
        if (other.gameObject.tag == "Player") // if the collision item is the player then kill the player.
        {
            //Destroy(other.gameObject);
            PlayerControl.currentPlayer.Health = 0;
        }
    }
}