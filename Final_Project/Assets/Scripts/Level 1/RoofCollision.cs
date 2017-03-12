using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//author: Sean Crawford
//with code and concept contributions by: inScope Studios https://www.youtube.com/channel/UCyVsCcTte38YC9CxJtw3hBQ

public class RoofCollision : MonoBehaviour {

    private BoxCollider2D playerCollider;

    [SerializeField]
    private BoxCollider2D roofCollider;

    [SerializeField]
    private BoxCollider2D roofTrigger;

   

	// Use this for initialization
	void Start () {

        playerCollider = GameObject.Find("Player").GetComponent<BoxCollider2D>();
        Physics2D.IgnoreCollision(roofCollider, roofTrigger, true);		
	}
	

	private void OnTriggerEnter2D (Collider2D other)
    {
        if (other.gameObject.name == "Player")
        {
            Physics2D.IgnoreCollision(roofCollider, playerCollider, true);
        }
		
	}

    private void OnTriggerExit2D(Collider2D other)
    {
        if (other.gameObject.name == "Player")
        {
            Physics2D.IgnoreCollision(roofCollider, playerCollider, false);
        }
    }
}
