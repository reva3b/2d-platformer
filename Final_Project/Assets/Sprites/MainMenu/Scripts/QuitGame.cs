/*
	Author: Ravi Teja Vedantam
*/
using UnityEngine;
using System.Collections;
using System.IO;
// QuitGame is defined in the monobehaviour 
public class QuitGame : MonoBehaviour {

    public void Quit()
	{
#if UNITY_STANDALONE
        SaveLoadManager.Save();
        Application.Quit();  // inbuilt class that helps the game to quit
	#endif

	#if UNITY_EDITOR
		UnityEditor.EditorApplication.isPlaying = false; // this is make the game quit when the game is running in the editor mode
	#endif
	}
}
