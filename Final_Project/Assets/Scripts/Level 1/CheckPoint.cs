using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//author: Sean Crawford
//with code and concepts contributed by: Space Lizard Studio http://spacelizardstudio.com/devblog/index.php/2016/02/26/unity-how-to-design-a-simple-checkpoint-system/

public class CheckPoint : MonoBehaviour {
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    /*
    // have we been triggered?
    bool triggered;

    void Awake()
    {
        triggered = false;
    }

    // called whenever another collider enters our zone (if layers match)
    void OnTriggerEnter2D(Collider2D collider)
    {
        // check we haven't been triggered yet!
        if (!triggered)
        {
            // check we actually collided with 
            // a character. It would be best to
            // setup your layers so this check is
            // not required, by creating a layer 
            // "Checkpoint" that will only collide 
            // with characters.
            if (collider.gameObject.layer
                == LayerMask.NameToLayer("Character"))
            {
                Trigger();
            }
        }
    }

    void Trigger()
    {
        // Tell the animation controller about our 
        // recent triggering
        GetComponent<Animator>().SetTrigger("Triggered");

        triggered = true;
    }
    */
}
