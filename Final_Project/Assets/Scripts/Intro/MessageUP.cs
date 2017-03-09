using UnityEngine;
using UnityEngine.UI;

public class MessageUP : MonoBehaviour
{
    public Image Msg;
    public Text Text;
    private PlayerControl thePlayerControlManager;
    //private PlayerStats thePlayerStatsManager;
    public Rigidbody2D PlayerRigidBody;




    // Use this for initialization
    void Start()
    {

        //thePlayerControlManager = GetComponent<PlayerControl>();
        thePlayerControlManager = FindObjectOfType<PlayerControl>();
        Msg.enabled = false;
        Text.enabled = false;
    }

    void Update()
    {
        PlayerRigidBody = thePlayerControlManager.PlayerRigidBody;
        if (thePlayerControlManager.PlayerRigidBody.velocity.y != 0)
        {
            Msg.enabled = false;
            Text.enabled = false;
        }
    }

}


