using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MysteryItemDisplay : MonoBehaviour {
    public MysteryItemManager item;
    public Text mysteryItemDisplay;
    public float fadeTime;
	// Use this for initialization
	void Start () {
        item = FindObjectOfType<MysteryItemManager>();
        StartCoroutine(FadeOut());
    }
    void ExitDisplay()
    {
        mysteryItemDisplay.enabled = false;
    }
    // Update is called once per frame
    void Update()
    {
        if (mysteryItemDisplay.color.a == 0)
        {
            Color tmpColor = mysteryItemDisplay.color;
            mysteryItemDisplay.color = new Color(tmpColor.r, tmpColor.g, tmpColor.b, 255f);
        }

        if (item.increaseSpeed)
            mysteryItemDisplay.text = ("Increase Speed!");
        if (item.superJump)
            mysteryItemDisplay.text = ("Super Jump!");
        if (item.decreaseSpeed)
            mysteryItemDisplay.text = ("Decrease Speed...!");
        if (item.cantJump)
            mysteryItemDisplay.text = ("Can't Jump...");
        if (item.increaseHealth)
            mysteryItemDisplay.text = ("Increase Health!");
        if (item.decreaseHealth)
            mysteryItemDisplay.text = ("Decrease Health...");
        if (item.shield)
            mysteryItemDisplay.text = ("Gain Shield!");
        if (item.gainWeapon)
            mysteryItemDisplay.text = ("Gain Weapon!");
        if (item.loseWeapon)
            mysteryItemDisplay.text = ("Lost Weapon!");
        if (item.moreEnemies)
            mysteryItemDisplay.text = ("More Enemies!");
        if (item.immortality)
            mysteryItemDisplay.text = ("Gain Immortality!");

    }


    public IEnumerator FadeOut()
    {
        float startAlpha = mysteryItemDisplay.color.a;//item.color.a;
        float rate = 1.0f / fadeTime;
        float progress = 0.0f;

        while (progress < 1.0)
        {
            Color tmpColor = mysteryItemDisplay.color;
            mysteryItemDisplay.color = new Color(tmpColor.r,tmpColor.g,tmpColor.b,Mathf.Lerp(startAlpha,0,progress));
            progress += rate * Time.deltaTime;
            yield return null;
        }
    }
}
