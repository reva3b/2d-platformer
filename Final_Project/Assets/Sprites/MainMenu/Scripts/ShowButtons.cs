using UnityEngine;
using System.Collections;

public class ShowButtons : MonoBehaviour {

	public GameObject settingsPanel;							
	public GameObject settingsTint;							
	public GameObject menuPanel;							
	public GameObject pausePanel;							


	public void ShowSettingsPanel()
	{
		settingsPanel.SetActive(true);
		settingsTint.SetActive(true);
	}

	public void HideSettingsPanel()
	{
		settingsPanel.SetActive(false);
		settingsTint.SetActive(false);
	}

	public void ShowMenu()
	{
		menuPanel.SetActive (true);
	}

	public void HideMenu()
	{
		menuPanel.SetActive (false);
	}
	
	public void ShowPausePanel()
	{
		pausePanel.SetActive (true);
		settingsTint.SetActive(true);
	}

	public void HidePausePanel()
	{
		pausePanel.SetActive (false);
		settingsTint.SetActive(false);

	}
}
