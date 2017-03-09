using UnityEngine;
using UnityEngine.UI;


public class MessageTR : MonoBehaviour
{

    public Image Msg;
    public Text Text;





    void Start()
    {


        Msg.enabled = false;
        Text.enabled = false;
    }



    void OnTriggerEnter2D(Collider2D other)
    {


        if (other.gameObject.tag == "Trophy")
        {
            Msg.enabled = false;
            Text.enabled = false;
        }
    }


}
