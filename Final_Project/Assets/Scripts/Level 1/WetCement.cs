using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//author: Sean Crawford
//with code and concept contributions by: Pow Vang

public class WetCement : MonoBehaviour {

    //public static MysteryItemManager theMysteryItemManager;
    private PlayerControl thePlayerControlManager;
    //private PlayerStats thePlayerStatsManager;
    private float normalMovementSpeed; //default movement speed
    private float normalJumpForce;
    private bool CementActive;
    private float CementCounter;
    private float originalMovement;
    private float originalJump;



    void Start () {
        thePlayerControlManager = FindObjectOfType<PlayerControl>();
        //theMysteryItemManager = FindObjectOfType<MysteryItemManager>();
        //originalJump = thePlayerControlManager.PlayerJumpForce;
        //originalMovement = thePlayerControlManager.PlayerMovementSpeed;
    }
	
	// Update is called once per frame
	void Update () {
       /* if (CementActive == true)
        {
            CementCounter -= Time.deltaTime;
            thePlayerControlManager.PlayerMovementSpeed = normalMovementSpeed * .5f;
            thePlayerControlManager.PlayerJumpForce = 0;

            if (CementCounter <= 0)
            {
                thePlayerControlManager.PlayerJumpForce = normalJumpForce;
                thePlayerControlManager.PlayerMovementSpeed = normalMovementSpeed;
                CementActive = false;
            }

        }*/
    }

    public void OnCollisionEnter2D(Collision2D other)
    {

            if(other.gameObject.tag == "Player")
        {
            //theMysteryItemManager.ActivateMysteryItem(false, false, false, false, false, true, true, false, false, false, 100f);
            thePlayerControlManager.PlayerMovementSpeed = 5;
            thePlayerControlManager.PlayerJumpForce = 0;
            /*CementActive = true;
            while (CementActive)
            {
                CementCounter = 100;

            }
            */
        }
    }
    public void OnCollisionExit2D(Collision2D other)
    {
        if (other.gameObject.tag == "Player")
        {
            thePlayerControlManager.PlayerMovementSpeed = 10;
            thePlayerControlManager.PlayerJumpForce = 550;
        }
    }

}
