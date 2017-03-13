// Afam Ezenekwe

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ignore : MonoBehaviour {

	[SerializeField]
	private Collider2D other; // Allows for the enemy to Ignore the player when they get next to each other.

	private void Awake ()

	{
		Physics2D.IgnoreCollision (GetComponent<Collider2D> (), other, true); // Allows for the enemy to pass through the player.
	}
}