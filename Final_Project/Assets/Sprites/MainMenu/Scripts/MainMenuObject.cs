
/*
	Author: Ravi Teja Vedantam
    Referenced from the free sprite known as game jam template in unity.

*/

using UnityEngine;

public class MainMenuObject : MonoBehaviour {
    // creates a copy of the mainmenu scene when the scene is changed to another scene to prevent the previous scene 
    // from being completely destroyed. This was useful while editing the main menu scene. Not needed for the final project.

void Start()
	{
 DontDestroyOnLoad(this.gameObject); 
	}
   
}