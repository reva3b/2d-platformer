using UnityEngine;
using UnityEngine.UI;

//author: Sean Crawford

public class MessageTR : MonoBehaviour
{

    public Image Msg;
    public Text Text;
    public PopMsgUP popMsg;





    void Start()
    {


        Msg.enabled = false;
        Text.enabled = false;
        popMsg.enMsg = true;
    }



    void OnTriggerEnter2D(Collider2D other)
    {


        if (other.gameObject.tag == "Trophy")
        {
            Msg.enabled = false;
            Text.enabled = false;
            popMsg.enMsg = false;
        }
    }


}
