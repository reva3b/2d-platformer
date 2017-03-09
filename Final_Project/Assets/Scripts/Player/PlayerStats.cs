/*
	Author: Revathi Bhuvaneswari
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
    public string PlayerName;
    public int LevelID;
    public float PositionX;
    public float PositionY;

    public PlayerStats() // Default Constructor
    {
        Health = 100;
        Shield = 50;
        CoinCount = 0;
        PlayerName = "";
        LevelID = 0;
        PositionX = 0.0f;
        PositionY = 0.0f;
    }
}
