
/*
	Author: Ravi Teja Vedantam
*/

using UnityEngine;
public class ShowButtons : MonoBehaviour {

	public GameObject settingsPanel;	// game object created to showcase the settings panel						
	public GameObject settingsTint;         // game object created to showcase the	settingstint			
    public GameObject menuPanel;            // game object created to showcase the	menupanel			
    public GameObject pausePanel;   // game object created to showcase the PausePanel

    public void ShowButtonsPanel()
	{
		settingsPanel.SetActive(true); //set true
		settingsTint.SetActive(true);
	}

	public void HideButtonsPanel()
	{
		settingsPanel.SetActive(false); // set false 
		settingsTint.SetActive(false);
	}
 
    public void ShowMenu()
	{
		menuPanel.SetActive (true); // set true for menu
	}

	public void HideMenu()
	{
		menuPanel.SetActive (false); // set false for menu
	}
	
	public void ShowPausePanel()
	{
		pausePanel.SetActive (true); // set true for pause panel
		settingsPanel.SetActive(true);
	}

	public void HidePausePanel()
	{
		pausePanel.SetActive (false);  // set false for pause panel
        settingsPanel.SetActive(false);

	}
}
