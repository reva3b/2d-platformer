using UnityEngine;
using System.Collections;

public class PauseScreen : MonoBehaviour {


	private ShowButtons showPanels;						
	private bool isPaused;								
	private MainMenu startScript;					
	
	void Awake()
	{
		showPanels = GetComponent<ShowButtons> ();
		startScript = GetComponent<MainMenu> ();
	}

	void Update () {

		if (Input.GetButtonDown ("Cancel") && !isPaused && !startScript.inMainMenu) 
		{
			DoPause();
		} 
		else if (Input.GetButtonDown ("Cancel") && isPaused && !startScript.inMainMenu) 
		{
			UnPause ();
		}
	
	}


	public void DoPause()
	{
		isPaused = true;
		Time.timeScale = 0;
		showPanels.ShowPausePanel ();
	}


	public void UnPause()
	{
		isPaused = false;
		Time.timeScale = 1;
		showPanels.HidePausePanel ();
	}


}
