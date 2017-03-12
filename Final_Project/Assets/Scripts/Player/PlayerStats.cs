/*
	Author: Revathi Bhuvaneswari
  
    This script file is used to store all the player stats in the form of variables inside a class. 
    This script file is also responsible for assigning default values to these variables when a new instance of this class is created

*/

using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;

[Serializable]
public class PlayerStats
{
    public int Health;
    public int Shield;
    public int CoinCount;
    public string name;
    public int LevelID;
    public float PositionX;
    public float PositionY;

    public PlayerStats() // Default Constructor
    {
        Health = 100;
        Shield = 50;
        CoinCount = 0;
        name = "";
        LevelID = 0;
        PositionX = 0.0f;
        PositionY = 0.0f;
    }
}