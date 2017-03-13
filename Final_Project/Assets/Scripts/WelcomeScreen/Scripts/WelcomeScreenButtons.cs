
/*
	Author: Ravi Teja Vedantam
*/
using UnityEngine;
public class WelcomeScreenButtons : MonoBehaviour
{

    public GameObject continuePanel; // the continue panel is supposed to appear when the player enters the game and wants to quit
    public GameObject settingsTint; // the settings tint will only add to the pause panel's background

    public void ShowButtonsPanel()    
    {
        continuePanel.SetActive(true);
        settingsTint.SetActive(true);
    }

    public void HideButtonsPanel()
    {
        continuePanel.SetActive(false);
        settingsTint.SetActive(false);
    }
    public void ShowPausePanel()
    {
        continuePanel.SetActive(true);
    }

    public void HidePausePanel()
    {
        continuePanel.SetActive(false);

    }
}