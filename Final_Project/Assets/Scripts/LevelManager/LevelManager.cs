using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

//author: Sean Crawford
//with code and concepts contributed by: GPSAS 2d Games  https://www.youtube.com/watch?v=jk5zKNhXCmc

public class LevelManager : MonoBehaviour
{
    public int Level;
    public Image Image;
    private string LevelString;
    public static int releasedLevelStatic = 1;

    void Start()
    {
        if(PlayerPrefs.HasKey("Level"))
        {
            releasedLevelStatic = PlayerPrefs.GetInt("Level", releasedLevelStatic);

        }

        if (releasedLevelStatic >= Level)
        {
            Levelunlocked();
        }
        else
        {
            Levellocked();
        }
    }


    public void LevelSelect(string _level)
    {
        LevelString = _level;
        SceneManager.LoadScene(LevelString);
    }



    void Levellocked()
    {
        GetComponent<Button>().interactable = false;
        Image.enabled = true;
    }
    void Levelunlocked()
    {
        GetComponent<Button>().interactable = true;
        Image.enabled = false;
    }


    public void ButtonMenu()
    {
        SceneManager.LoadScene("Main Menu");

    }

    public void ButtonMenu2()
    {
        SceneManager.LoadScene("Welcome Screen");

    }
}
