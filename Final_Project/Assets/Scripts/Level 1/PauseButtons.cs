
/*
	Author: Ravi Teja Vedantam
*/

using UnityEngine;
public class PauseButtons : MonoBehaviour
{
   //game object pause panel shall be created
    public GameObject pausePanel;

    // this function will show the pause panel in the game (intro and level 1)
    public void ShowPausePanel()
    {
        pausePanel.SetActive(true);
    }
    // this function will hide the pause panel in the game (intro and level 1)
    public void HidePausePanel()
    {
        pausePanel.SetActive(false);

    }
}
