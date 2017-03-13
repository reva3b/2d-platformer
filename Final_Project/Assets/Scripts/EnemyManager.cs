/*
 Author: Pow Vang
 Purpose: This script has an enemy spawn point located in the scene and once the Spawn function is called, it instantiate an enemy at the spawn point.
 
 */

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyManager : MonoBehaviour {
    public Enemy enemy;
    public Transform spawnPoints;
	// Use this for initialization
	void Start ()
    {

        enemy = FindObjectOfType<Enemy>();
    }

    public void Spawn () //instantiate a new enemy at the enemy spawn point
    {
        GameObject OBject = Instantiate(Resources.Load("Enemy"), spawnPoints.position, spawnPoints.rotation) as GameObject; 
    }
}
