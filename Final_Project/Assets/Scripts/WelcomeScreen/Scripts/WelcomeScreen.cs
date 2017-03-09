using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class WelcomeScreen : MonoBehaviour
{

    public enum Menu
    {
        WelcomeScreenMenu,
        NewGame,
        Continue
    }

    public Menu currentMenu;

    void OnGUI()
    {

        GUILayout.BeginArea(new Rect(0, 0, Screen.width, Screen.height));
        GUILayout.BeginHorizontal();
        GUILayout.FlexibleSpace();
        GUILayout.BeginVertical();
        GUILayout.FlexibleSpace();

        if (currentMenu == Menu.WelcomeScreenMenu)
        {

            GUILayout.Space(10);

            if (GUILayout.Button("New Game", GUILayout.Width(125), GUILayout.Height(49)))
            {
                Game.current = new Game();
                currentMenu = Menu.NewGame;
            }

            if (GUILayout.Button("Continue", GUILayout.Width(125), GUILayout.Height(49)))
            {
                SaveLoad.Load();
                currentMenu = Menu.Continue;
            }

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

        else if (currentMenu == Menu.NewGame)
        {

            GUILayout.Box("Enter Player's Name", GUILayout.Width(125), GUILayout.Height(49));
            GUILayout.Space(10);

            GUILayout.Label("       Archeologist");
            Game.current.Archeologist.name = GUILayout.TextField(Game.current.Archeologist.name, 40);
           

            if (GUILayout.Button("Save", GUILayout.Width(125), GUILayout.Height(49)))
            {
                //Save the current Game as a new saved Game
                SaveLoad.Save();
                SceneManager.LoadScene(1);

            }

            GUILayout.Space(10);
            if (GUILayout.Button("Cancel", GUILayout.Width(125), GUILayout.Height(49)))
            {
                currentMenu = Menu.WelcomeScreenMenu;
            }

        }

        else if (currentMenu == Menu.Continue)
        {

            GUILayout.Box("Select Save File", GUILayout.Width(125), GUILayout.Height(49));
            GUILayout.Space(10);

            foreach (Game g in SaveLoad.savedGames)
            {
                if (GUILayout.Button(g.Archeologist.name))
                {
                    Game.current = g;
                    SceneManager.LoadScene(1);

                }

            }

            GUILayout.Space(10);
            if (GUILayout.Button("Cancel", GUILayout.Width(125), GUILayout.Height(49)))
            {
                currentMenu = Menu.WelcomeScreenMenu;
            }

        }

        GUILayout.FlexibleSpace();
        GUILayout.EndVertical();
        GUILayout.FlexibleSpace();
        GUILayout.EndHorizontal();
        GUILayout.EndArea();

    }
}
