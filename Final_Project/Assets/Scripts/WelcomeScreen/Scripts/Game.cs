/*
	Author: Ravi Teja Vedantam
*/

using UnityEngine;
using System.Collections;

 [System.Serializable]public class Game
    {
    // this calls the character class and holds the game's current data in the save load manager for testign purpose
        public static Game current;
        public PlayerStats Archeologist; // to load the game's data we are using player stats that holds health, and other variables for the final product
        public Game()
        {
            Archeologist = new PlayerStats();
        }

    }

