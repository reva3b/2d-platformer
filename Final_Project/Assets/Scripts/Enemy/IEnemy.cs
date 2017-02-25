using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IEnemy
	{
	void Execute();
	void Enter (Enemy enemy);
	void Exit();
	void OnTriggerEnter(Collider2D other);


	}