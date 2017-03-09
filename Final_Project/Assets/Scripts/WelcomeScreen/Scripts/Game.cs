using UnityEngine;
using System.Collections;

 [System.Serializable]
    public class Game
    {

        public static Game current;
        public Character Archeologist;
        public Game()
        {
            Archeologist = new Character();
        }

    }

