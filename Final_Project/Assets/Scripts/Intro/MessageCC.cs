using UnityEngine;
using UnityEngine.UI;


//author: Sean Crawford

public class MessageCC : MonoBehaviour {
   // private int currCoins;
    public Image Msg;
    public Text Text;
    public PopMsgUP popMsg;
    // private PlayerControl thePlayerControlManager;
    //private PlayerStats thePlayerStatsManager;
    //public Rigidbody2D PlayerRigidBody;
    // public static PlayerStats currentPlayer = new PlayerStats();



    // Use this for initialization
    void Start()
    {
        

        Msg.enabled = false;
        Text.enabled = false;
        popMsg.enMsg = true;
    }



    public void OnCollisionEnter2D(Collision2D other)
    {


        if (other.gameObject.tag == "Coin")
        {
            Msg.enabled = false;
            Text.enabled = false;
            popMsg.enMsg = false;
        }
    }


}
