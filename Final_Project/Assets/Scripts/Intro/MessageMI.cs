using UnityEngine;
using UnityEngine.UI;

public class MessageMI : MonoBehaviour
{
    // private int currCoins;
    public Image Msg;
    public Text Text;
    // private PlayerControl thePlayerControlManager;
    //private PlayerStats thePlayerStatsManager;
    //public Rigidbody2D PlayerRigidBody;
    // public static PlayerStats currentPlayer = new PlayerStats();



    // Use this for initialization
    void Start()
    {


        Msg.enabled = false;
        Text.enabled = false;
    }



    void OnTriggerEnter2D(Collider2D other)
    {


        if (other.gameObject.tag == "Mystery Item")
        {
            Msg.enabled = false;
            Text.enabled = false;
        }
    }


}
