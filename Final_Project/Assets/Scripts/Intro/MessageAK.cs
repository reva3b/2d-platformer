using UnityEngine;
using UnityEngine.UI;


using UnityEngine;
using UnityEngine.UI;

public class MessageAK : MonoBehaviour
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
        
        if (Input.GetKey(KeyCode.Space) == true)
        {
            Msg.enabled = false;
            Text.enabled = false;
        }
    }

}
