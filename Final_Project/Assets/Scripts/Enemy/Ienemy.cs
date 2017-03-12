// Afam Ezenekwe

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface Ienemy 
{
	void execute(); // Interface Execute function.
	void Enter(Enemy enemy); // Interface Enter function.
	void Exit(); // Interface Exit function.
	void OnTriggerEnter(Collider2D other); // Interface OnTriggerEnter function.
}