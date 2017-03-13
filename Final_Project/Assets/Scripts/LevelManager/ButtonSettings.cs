using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

//author: Sean Crawford
//with code and concepts contributed by: GPSAS 2d Games  https://www.youtube.com/watch?v=jk5zKNhXCmc

public class ButtonSettings : MonoBehaviour
{
    public static int releasedLevelStatic = 1;
    public int releasedLevel;
    public string nextLevel;


    void Awake()
    {
        if (PlayerPrefs.HasKey("Level"))
        {
            releasedLevelStatic = PlayerPrefs.GetInt("Level", releasedLevelStatic);

        }
    }
/*
    public void ButtonNextLevel()
    {
        SceneManager.LoadScene(nextLevel);
        if (releasedLevelStatic <= releasedLevel)
        {
            releasedLevelStatic = releasedLevel;
            PlayerPrefs.SetInt("Level", releasedLevelStatic);

        }
    } */
    public void ButtonMenu()
    {
        SceneManager.LoadScene("Main Menu");
    }

    public void ButtonMenu2()
    {
        SceneManager.LoadScene("Welcome Screen");

    }
}