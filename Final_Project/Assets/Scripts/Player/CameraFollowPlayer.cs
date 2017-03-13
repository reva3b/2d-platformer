/*
	Author: Revathi Bhuvaneswari
	
    This script file is responsible for controlling the main camera in the game levels in such a way that the camera always follows the player object throughout the level

*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollowPlayer : MonoBehaviour
{
    [SerializeField]
    private float Max_X_Axis_Value; // appear's in Main Camera Inspector

    [SerializeField]
    private float Max_Y_Axis_Value; // appear's in Main Camera Inspector

    [SerializeField]
    private float Min_X_Axis_Value; // appear's in Main Camera Inspector

    [SerializeField]
    private float Min_Y_Axis_Value; // appear's in Main Camera Inspector

    private Transform MainCameraTarget; // what is the Main Camera's Target? -- Player Object

    // Use this for initialization
    void Start()
    {
        MainCameraTarget = GameObject.Find("Player").transform; // setting the Main Camera's target as Player
    }

    // LateUpdate is called every frame - called after all Update() functions as called
    void LateUpdate()
    {
        // altering the Camera's tranform component to min and max values of x and y axis - setting camera's position to player's position in the scene
        transform.position = new Vector3(Mathf.Clamp(MainCameraTarget.position.x, Min_X_Axis_Value, Max_X_Axis_Value), Mathf.Clamp(MainCameraTarget.position.y, Min_Y_Axis_Value, Max_Y_Axis_Value), transform.position.z);
    }
}