using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class PopMsgUP : MonoBehaviour {
    public Image Msg;
    public Text Text;

    // Use this for initialization
    void Start () {
		
	}
	

    public void OnCollisionEnter2D(Collision2D other)
    {


        if (other.gameObject.tag == "Player")
        {
            Msg.enabled = true;
            Text.enabled = true;
        }
    }

}
