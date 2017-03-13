using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class toWelcomeScreen : MonoBehaviour
{
    public Button yourButton;
    // Use this for initialization
    void Start()
    {
        Button btn = yourButton.GetComponent<Button>();
        btn.onClick.AddListener(TaskOnClick);
    }

    // Update is called once per frame
    void TaskOnClick()
    {
        //Application.LoadLevel(1);
        //Application.loadedLevel(MainMenu);
        SceneManager.LoadScene("Welcome Screen");
    }
}
