using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class WelcomeScreenScript : MonoBehaviour {

    private void Start()
    {

    }
    public void ChangeScene(int number)
    {
        SceneManager.LoadScene(number);
    }
    
}
