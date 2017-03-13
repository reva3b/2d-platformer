
/*
	Author: Ravi Teja Vedantam
    	Referenced from the free sprite known as game jam template in unity.

*/
using UnityEngine;

public class PauseScreen : MonoBehaviour {


	private ShowButtons showPanels;				// calls the showButtons class to allow the panel to have the options available		
	private bool isPaused;								
	private MainMenu startScript;			//calls the mainmenu because the play option allows the pause panel to appear		
	
	void Awake()
	{
		showPanels = GetComponent<ShowButtons> ();
		startScript = GetComponent<MainMenu> ();
	}

	void Update () {
        if (Input.GetButtonDown ("Cancel") && !isPaused && !startScript.inMainMenu) //GetButtonDown gets the key input and calls the pause panel
		{
			DoPause();
		} 
		else if (Input.GetButtonDown ("Cancel") && isPaused && !startScript.inMainMenu) //unpauses the pause panel when the key is pressed again
		{
			UnPause ();
		}
	
	}
    //pause function to show the pause panel
    public void DoPause() 
	{
		isPaused = true;
		Time.timeScale = 0;
		showPanels.ShowPausePanel ();
	}
    // pause function to hide the pause panel
    public void UnPause()
	{
		isPaused = false;
		Time.timeScale = 1;
		showPanels.HidePausePanel ();
	}
}
