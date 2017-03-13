using UnityEngine;
using UnityEngine.UI;

//author: Sean Crawford

public class MessageUP : MonoBehaviour
{
    public Image Msg;
    public Text Text;
    private PlayerControl thePlayerControlManager;
    //private PlayerStats thePlayerStatsManager;
    public Rigidbody2D PlayerRigidBody;
    public PopMsgUP popMsg;




    // Use this for initialization
    void Start()
    {

        //thePlayerControlManager = GetComponent<PlayerControl>();
        thePlayerControlManager = FindObjectOfType<PlayerControl>();
        Msg.enabled = false;
        Text.enabled = false;
        popMsg.enMsg = true;
    }

    void Update()
    {
        PlayerRigidBody = thePlayerControlManager.PlayerRigidBody;
        if (thePlayerControlManager.PlayerRigidBody.velocity.y != 0)
        {
            Msg.enabled = false;
            Text.enabled = false;
            popMsg.enMsg = false;
        }
    }

}


