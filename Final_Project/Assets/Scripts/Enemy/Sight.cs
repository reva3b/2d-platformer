// Afam Ezenekwe

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Sight : MonoBehaviour {

	[SerializeField]
	private Enemy enemy; // Allows for the sight class to access the enemy class.

	void OnTriggerEnter2D(Collider2D other) // creates a tag for the player so the enemy can see the player.
	{
		if (other.tag == "Player") 
		{
			enemy.Target = other.gameObject;
		}
	}
	void OnTriggerExit2D(Collider2D other) // exits the sight when a player can not be seen anymore.
	{
		if (other.tag == "Player") {
			enemy.Target = null;
		}
    }
}