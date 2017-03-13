/*
 Author: Pow Vang
 Purpose: This script will display the player's coin count during the game.
 
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class CoinCounter : MonoBehaviour {
    public Text coinDisplay; 
    public Image coin;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
        coinDisplay.text = ( "     : " + PlayerControl.currentPlayer.CoinCount); // display coin count to the screen
	}
}
