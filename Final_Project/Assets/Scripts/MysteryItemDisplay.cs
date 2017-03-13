/*
 Author: Pow Vang
 Purpose: This script displays what kind of mystery item the player has received.
 
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MysteryItemDisplay : MonoBehaviour {
    public MysteryItemManager item;
    public Text mysteryItemDisplay;
    public float fadeTime;
    public bool displayOn = false;
	// Use this for initialization
	void Start () {
        item = FindObjectOfType<MysteryItemManager>();
        Color tempColor = mysteryItemDisplay.color;
    }

    // Update is called once per frame
    void Update() // once the player collects a mystery item, this function will also be called to display what the mystery item was
    {
        if (displayOn == true)
        {
            if (item.increaseSpeed)
            {
                mysteryItemDisplay.text = ("Increase Speed!");
            }
            if (item.superJump)
            {
                mysteryItemDisplay.text = ("Super Jump!");
            }
            if (item.decreaseSpeed)
            {
                mysteryItemDisplay.text = ("Decrease Speed...!");
            }
            if (item.cantJump)
            {
                mysteryItemDisplay.text = ("Can't Jump...");
            }
            if (item.increaseHealth)
            {
                mysteryItemDisplay.text = ("Increase Health!");
            }
            if (item.decreaseHealth)
            {
                mysteryItemDisplay.text = ("Decrease Health...");
            }
            if (item.shield)
            {
                mysteryItemDisplay.text = ("Gain Shield!");
            }
            if (item.gainWeapon)
            {
                mysteryItemDisplay.text = ("Gain Weapon!");
            }
            if (item.loseWeapon)
            {
                mysteryItemDisplay.text = ("Lost Weapon!");
            }
            if (item.moreEnemies)
            {
                mysteryItemDisplay.text = ("More Enemies!");
            }
            if (item.immortality)
            {
                mysteryItemDisplay.text = ("Gain Immortality!");
                
            }
            StartCoroutine(FadeOut());
            displayOn = false;
        }
    }


    public IEnumerator FadeOut() // this function will cause the text display of the mystery item to fade away. 
    {
        Color tempColor = mysteryItemDisplay.color; // create a copy of the text colors
        if (mysteryItemDisplay.color.a < 100)
            mysteryItemDisplay.color = new Color(tempColor.r, tempColor.g, tempColor.b, 255); // if the alpha color value in the text is less than 100 then make it fully visible again
        
        float startAlpha = mysteryItemDisplay.color.a;
        float rate = 1.0f / fadeTime;
        float progress = 0.0f;

        while (progress < 1.0)
        {
            mysteryItemDisplay.color = new Color(tempColor.r,tempColor.g,tempColor.b,Mathf.Lerp(startAlpha,0,progress)); // slowly make the text fade away
            progress += rate * Time.deltaTime;
            if (mysteryItemDisplay.color.a < 100) // if the alpha color value in the text is less than 100 then make the text invisible
            {
                mysteryItemDisplay.color = new Color(tempColor.r, tempColor.g, tempColor.b, 0);
                yield break; 
            }
            yield return null;
        }
    }
}
