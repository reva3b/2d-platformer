
/*
	Author: Ravi Teja Vedantam
*/

using UnityEngine;

public class PauseMenu : MonoBehaviour
{

    // calls the showButtons class to allow the panel to have the options available		
    private PauseButtons showPanels;
    private bool isPaused;
    void Awake()
    {
        showPanels = GetComponent<PauseButtons>();
    }

    void Update()
    {
        if (Input.GetButtonDown("Cancel") && !isPaused) //GetButtonDown gets the key input and calls the pause panel
        {
            DoPause();
        }
        else if (Input.GetButtonDown("Cancel") && isPaused) //unpauses the pause panel when the key is pressed again
        {
            UnPause();
        }

    }
    //pause function to show the pause panel

    public void DoPause()
    {
        isPaused = true;
        Time.timeScale = 0;
        showPanels.ShowPausePanel();
    }

    // pause function to hide the pause panel

    public void UnPause()
    {
        isPaused = false;
        Time.timeScale = 1;
        showPanels.HidePausePanel();
    }


}
