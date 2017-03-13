using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//author: Sean Crawford

public class PopMsgUP : MonoBehaviour {
    public Image Msg;
    public Text Text;
    public bool enMsg;

    // Use this for initialization
    void Start () {
		
	}
	

    public void OnCollisionEnter2D(Collision2D other)
    {


        if (other.gameObject.tag == "Player" && enMsg == true)
        {
            Msg.enabled = true;
            Text.enabled = true;
        }
    }



}
