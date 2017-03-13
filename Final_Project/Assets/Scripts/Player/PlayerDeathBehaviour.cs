/*
	Author: Revathi Bhuvaneswari
    
    This script is responsible for controlling the player’s sprite’s death animation when the player's health reaches 0

*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerDeathBehaviour : StateMachineBehaviour 
{
	private float PlayerRespawnTime = 3;

	private float PlayerDeathTime;

	 // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
	override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) 
	{
		PlayerDeathTime = 0;
	}

	// OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
	override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) 
	{
		PlayerDeathTime = PlayerDeathTime + Time.deltaTime;

		// call the RespawnPlayer() function from the PlayerControl class
		if (PlayerDeathTime >= PlayerRespawnTime) 
		{
			animator.GetComponent <PlayerControl> ().RespawnPlayer();
		}
	}

	// OnStateExit is called when a transition ends and the state machine finishes evaluating this state
	//override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
	//
	//}

	// OnStateMove is called right after Animator.OnAnimatorMove(). Code that processes and affects root motion should be implemented here
	//override public void OnStateMove(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
	//
	//}

	// OnStateIK is called right after Animator.OnAnimatorIK(). Code that sets up animation IK (inverse kinematics) should be implemented here.
	//override public void OnStateIK(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
	//
	//}
}
