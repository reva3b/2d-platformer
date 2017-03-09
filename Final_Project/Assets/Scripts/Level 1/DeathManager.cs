using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;

[Serializable]
public class DeathManager : MonoBehaviour {


    //private Animator PlayerAnimator;
    public int RecHealth;
    public int RecShield;
    public int RecAttack;
    public int RecCoinCount;
    public int RecLevelID;
    public float RecPositionX;
    public float RecPositionY;

    public void CheckPoint(Collider2D other) 
    {
        if (other.gameObject.name == "CheckPoint")
        {
            RecHealth = PlayerControl.currentPlayer.Health;
            RecShield = PlayerControl.currentPlayer.Shield;
            // RecAttack = PlayerControl.currentPlayer.Attack;
            RecCoinCount = PlayerControl.currentPlayer.CoinCount;
            RecLevelID = PlayerControl.currentPlayer.LevelID;
            RecPositionX = PlayerControl.currentPlayer.PositionX;
            RecPositionY = PlayerControl.currentPlayer.PositionY;
        }
    }

    public void Death()
    {
      //  PlayerControl.PlayerRigidBody.velocity = Vector2.zero;
      //  PlayerAnimator.SetTrigger("Idle_Player");
        PlayerControl.currentPlayer.Health = RecHealth;
        PlayerControl.currentPlayer.Shield = RecShield;
        // PlayerControl.currentPlayer.Attack = RecAttack;
        PlayerControl.currentPlayer.CoinCount = RecCoinCount;
        PlayerControl.currentPlayer.LevelID = RecLevelID;
        PlayerControl.currentPlayer.PositionX = RecPositionX;
        PlayerControl.currentPlayer.PositionY = RecPositionY;

    }


}
