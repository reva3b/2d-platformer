/*
 Author: Pow Vang
 Purpose: This script will display a text signaling that the player has collected the trophy and will be transported back to the level selection scene
 
 */

using UnityEngine;
using UnityEngine.UI;

public class trophyMessage : MonoBehaviour
{
    public Image Msg;
    public Text Text;
    private PlayerControl thePlayerControlManager;

    // Use this for initialization
    void Start()
    {
        Msg.enabled = false;
        Text.enabled = false;
    }
    public void OnTriggerEnter2D(Collider2D collision) // if there is a collision with the player then a small text will pop up on the screen
    {
        if (collision.gameObject.tag == "Player")
        {
            Msg.enabled = true;
            Text.enabled = true;
        }
    }
}
