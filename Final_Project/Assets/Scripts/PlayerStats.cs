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
	public int Attack;
	public int CoinCount;
	public string PlayerName;
	public int LevelID;
	public float PositionX;
	public float PositionY;

	PlayerStats() // Default Constructor
	{
		Health = 100;
		Shield = 0;
		Attack = 50;
		CoinCount = 0;
		LevelID = 0;
	}
}
