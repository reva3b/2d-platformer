
/*
	Author: Ravi Teja Vedantam
*/
using UnityEngine;
using System.Collections;

public class GamePlay : MonoBehaviour
{
    public GameObject playerPrefab;
    void Start()
    {
        for (int i = 0; i < 1; i++)
        {
            GameObject newPlayer = Instantiate(playerPrefab, Vector3.right * i * 2, Quaternion.identity) as GameObject;
            if (i == 0)
            {
                newPlayer.name = Game.current.Archeologist.name;
            }
        }
    }

}