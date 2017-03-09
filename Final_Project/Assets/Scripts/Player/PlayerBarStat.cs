/*
    Author: Revathi Bhuvaneswari
*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

[Serializable]
public class PlayerBarStat
{
    [SerializeField]
    private PlayerBar player_bar; // instance of the class PlayerBar

    [SerializeField]
    private PlayerShield player_shield_bar; // instance of the class PlayerShield

    // Initializes the player's health bar
    public void InitializePlayerBarStat(int player_current_value, int player_max_value)
    {
        // clamping the current value to be within the range [0, max_value]
        player_bar.CurrentPlayerBarStatValue = Mathf.Clamp(player_current_value, 0, player_max_value);
        player_bar.MaximumPlayerBarStatValue = player_max_value;
    }

    // Intializes the player's shield bar
    public void InitializePlayerShieldBar(int player_current_value, int player_max_value)
    {
        // clamping the current value to be within the range [0, max_value]
        player_shield_bar.CurrentPlayerBarStatValue = Mathf.Clamp(player_current_value, 0, player_max_value);
        player_shield_bar.MaximumPlayerBarStatValue = player_max_value;
    }
}