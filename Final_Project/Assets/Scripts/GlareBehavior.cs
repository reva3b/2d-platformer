using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GlareBehavior : StateMachineBehaviour {
    private float glareTime = 5;
    private float elapsed;

	 // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
	override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        elapsed = 0;
    }

	// OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
	override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        elapsed += Time.deltaTime;
        if (elapsed >= glareTime)
        {
            animator.SetTrigger("Glare");
        }
	}
}
