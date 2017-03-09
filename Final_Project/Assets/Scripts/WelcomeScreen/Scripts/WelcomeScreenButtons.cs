using UnityEngine;
public class WelcomeScreenButtons : MonoBehaviour
{

    public GameObject continuePanel;
    public GameObject settingsTint;

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