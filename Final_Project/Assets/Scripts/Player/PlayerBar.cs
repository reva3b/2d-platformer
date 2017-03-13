/*
    Author: Revathi Bhuvaneswari
    
    This script file is responsible for controlling the appearance of the Player’s health bar

*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerBar : MonoBehaviour
{
    // Changes the player's health or shield bar if the player has the ability to gain more health or shield than the default value
    public int MaximumPlayerBarStatValue;

    // this is the value of the player's current health or shield that is used to change the appearance of the player's health or shield bar
    public int CurrentPlayerBarStatValue;

    private float PlayerBarFillAmount;

    [SerializeField]
    private Image PlayerBarContent; // appears in the particualr bar's inspector

    [SerializeField]
    private Text PlayerBarValueText; // appears in the particualr bar's inspector

    [SerializeField]
    private float PlayerBarLerpSpeed; // appear's in the particular bar's inspector

    // Use this for initialization
    void Start ()
    {

	}
	
	// Update is called once per frame
	void Update ()
    {
        HandlePlayerBar();
	}

    // This function changes the appearance of the player's Health or shield Bar according to the values
    private void HandlePlayerBar ()
    {
        // Display the health or shield in the format: 80 / 100 or 45 / 50
        PlayerBarValueText.text = CurrentPlayerBarStatValue + " / " + MaximumPlayerBarStatValue;
        
        // calculate the Fill amount for the player's bar - health or shield
        PlayerBarFillAmount = MapPlayerStatWithBar(CurrentPlayerBarStatValue, 0, MaximumPlayerBarStatValue, 0, 1);

        Debug.Log("Fill Amount = " + PlayerBarFillAmount + " Current Value = " + CurrentPlayerBarStatValue + " Max Value = " + MaximumPlayerBarStatValue);

        // Assign the calculated fill amount value to the actual fill amount of the content of the health or shield bar
        // We are going to update the actuall content.fillamount if the calculated value is different from the actual value
        if (PlayerBarFillAmount != PlayerBarContent.fillAmount)
        {
            PlayerBarContent.fillAmount = Mathf.Lerp(PlayerBarContent.fillAmount, PlayerBarFillAmount, Time.deltaTime * PlayerBarLerpSpeed);
        }
    }

    /* This function returns a value between 0 and 1 for the fillAmount component of the Player's Health or shield Bar
       It takes in the current player health or shield value, along with a min and max range for the particular player health or shield value, and a min and max range of value this function can return - Fill Amount
       For example if player's health ranges from 0 to 100, and current health is 53 --> Value = 53, Min = 0, Max = 100, MinReturn = 0, MaxReturn = 1 */
    private float MapPlayerStatWithBar (int PlayerStatValue, int MinPlayerStatValue, int MaxPlayerStatValue, float MinFillAmount, float MaxFillAmount)
    {
        float ActualPlayerBarFillAmount;

        ActualPlayerBarFillAmount = ((float)(PlayerStatValue - MinPlayerStatValue) * (float)(MaxFillAmount - MinFillAmount)) / ((float)(MaxPlayerStatValue - MinPlayerStatValue) + MinFillAmount);

        return (ActualPlayerBarFillAmount);
    }
}