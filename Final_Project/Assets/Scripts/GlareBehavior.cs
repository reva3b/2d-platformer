/*
 Author: Pow Vang
 Purpose: This script controls the coin's glare behavior inside the game.
 
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlareBehavior : StateMachineBehaviour {
    private float glareTime = 5;
    private float elapsed;

	 // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
	override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) 
    {
        elapsed = 0; //set the elapse time to 0 so that it can be incremented later
    }

	// OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
	override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        elapsed += Time.deltaTime; // after 5 seconds trigger the animation call glare
        if (elapsed >= glareTime)
        {
            animator.SetTrigger("Glare");
        }
	}
}
