
/*
	Author: Ravi Teja Vedantam
*/
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;


public class WelcomeScreen : MonoBehaviour
{
    //Welcome screen will be displayed
    public enum Menu
    {
        WelcomeScreenMenu, // three options on the screen
        NewGame,
        Continue
    }
    // enum that loads the current menu on to the screen
    public Menu currentMenu;
    // we are using onGUI that can showcase the buttons on the screen
    void OnGUI()
    {
        // basic GUIlayout that lays out the menu properly
        GUILayout.BeginArea(new Rect(0, 0, Screen.width, Screen.height));
        GUILayout.BeginHorizontal();
        GUILayout.FlexibleSpace();
        GUILayout.BeginVertical();
        GUILayout.FlexibleSpace();
        // if the current menu is the welcome screen then the following options shall be displyed
        if (currentMenu == Menu.WelcomeScreenMenu)
        {

            GUILayout.Space(10);
            // new game options is being displayed
            if (GUILayout.Button("New Game", GUILayout.Width(125), GUILayout.Height(49))) 
            {
                Game.current = new Game();
                currentMenu = Menu.NewGame;
            }
            // continue option is being displayed
            if (GUILayout.Button("Continue", GUILayout.Width(125), GUILayout.Height(49)))
            {
                SaveLoadManager.Load();
                currentMenu = Menu.Continue;
            }
            // quit option is being displayed
            if (GUILayout.Button("Quit",GUILayout.Width(125), GUILayout.Height(49)))
            {
             #if UNITY_STANDALONE
                Application.Quit();
             #endif

             #if UNITY_EDITOR
                UnityEditor.EditorApplication.isPlaying = false;
             #endif
            }
        }
        // when the new game option is clicked this current menu shall be displayed
        else if (currentMenu == Menu.NewGame)
        {
            // box shall say " to enter the name"
            GUILayout.Box("Enter Player's Name", GUILayout.Width(125), GUILayout.Height(49));
            GUILayout.Space(10);
            // and other variables that holds the player's name 
            GUILayout.Label("       Archeologist");
            Game.current.Archeologist.name = GUILayout.TextField(Game.current.Archeologist.name, 40);
           
            // finally the save option that saves the entered name
            if (GUILayout.Button("Save", GUILayout.Width(125), GUILayout.Height(49)))
            {
                //Save the current Game as a new saved Game
                SaveLoadManager.Save();
                SceneManager.LoadScene(1);

            }
            // if the player wants to cancel the save and go back to the welcome screen, thene the cancel will allow that to happen
            GUILayout.Space(10);
            if (GUILayout.Button("Cancel", GUILayout.Width(125), GUILayout.Height(49)))
            {
                currentMenu = Menu.WelcomeScreenMenu;
            }

        }
        // if the continue option is selected, then the current menu will be changed to continue screen
        else if (currentMenu == Menu.Continue)
        {
            // a player can select a saved file
            GUILayout.Box("Select Save File", GUILayout.Width(125), GUILayout.Height(49));
            GUILayout.Space(10);

            foreach (Game g in SaveLoadManager.savedGames)
            {
                if (GUILayout.Button(g.Archeologist.name))
                {
                    Game.current = g;
                    SceneManager.LoadScene(1);
                }
            }
            // cancel is there, if the player wants to cancel the continue option 
            GUILayout.Space(10);
            //if (GUILayout.Button("cancel", GUILayout.Width(125), GUILayout.Height(49)))
           // {
            //    currentMenu = Menu.WelcomeScreenMenu;
           // }
            if (GUILayout.Button("back", GUILayout.Width(125), GUILayout.Height(49)))
            {
                SceneManager.LoadScene("Welcome Screen");
            }
        }

        GUILayout.FlexibleSpace();
        GUILayout.EndVertical();
        GUILayout.FlexibleSpace();
        GUILayout.EndHorizontal();
        GUILayout.EndArea();

    }
}
