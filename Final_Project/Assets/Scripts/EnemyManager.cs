using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyManager : MonoBehaviour {
    //public enum SpawnType { Random, oneByOne}
    //public SpawnType spawnType;
    //public GameObject[] spawnPoints;
    //public string toSpawnResourceName = "GameObject";
    //private GameObject toSpawn;


    public GameObject enemy;
    public float spawnTime = 3f;
    public Transform[] spawnPoints;
	// Use this for initialization
	void Start () {
        //toSpawn = Resources.Load(toSpawnResourceName) as GameObject;
        //Invoke("Spawn", spawnTime);	
	}
	
	public void Spawn () {


        // Find a random index between zero and one less than the number of spawn points.
        int spawnPointIndex = Random.Range(0, spawnPoints.Length);

        // Create an instance of the enemy prefab at the randomly selected spawn point's position and rotation.
        Instantiate(enemy, spawnPoints[spawnPointIndex].position, spawnPoints[spawnPointIndex].rotation);




        //GameObject spawnPoint;

        //spawnPoint = spawnPoints[Random.Range(0, spawnPoints.Length)];

        //int spawnPointIndex = Random.Range(0, 3);//spawnPoints.Length);
        //Instantiate(toSpawn spawnPoints[spawnPoint], Quaternion.identity);
        //Instantiate(enemy, spawnPoints[spawnPointIndex].position,spawnPoints[spawnPointIndex].rotation);


    }
}
