/*
 Author: Pow Vang
 Purpose: This script will transfer the player back to the level selection screen after the trophy has been touched.
 
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Trophy : MonoBehaviour {
    //public ButtonSettings level;
    //public Renderer rend;
    public GameObject obj;
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
    public void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Player") //if collision is with the player then call the function to load a new scene
        {

            StartCoroutine(LoadScene());

        }
            
    }

    IEnumerator LoadScene()
    {
        yield return new WaitForSeconds(2); // wait 2 seconds
        LevelManager.releasedLevelStatic++; // increment the level manager to allow the next level to be selected
        SceneManager.LoadScene(1); // load the selection scene
    }
}
