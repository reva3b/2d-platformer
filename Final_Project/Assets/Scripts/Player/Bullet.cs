/* 
   Author: Revathi Bhuvaneswari
   
   This script file is responsible for controlling the position and movement of the bullet.

*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody2D))] // automatically adds a Rigidbody2D component to the object that this script is attached to
public class Bullet : MonoBehaviour
{
    [SerializeField]
    private float BulletSpeed; // appears in Bullet inspector

    private Rigidbody2D BulletRigidBody;

    private Vector2 BulletDirection;

    // Use this for initialization
    void Start()
    {
        BulletRigidBody = GetComponent<Rigidbody2D>();
    }

    void FixedUpdate()
    {
        BulletRigidBody.velocity = BulletDirection * BulletSpeed;
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void Initialize(Vector2 direction)
    {
        this.BulletDirection = direction; // the player's direction will be set to the Bullet's direction
    }

    // This function destroy's the bullet game object once it's goes out of the scene - this works because of the keyword OnBecameInvisible
    void OnBecameInvisible()
    {
        Destroy(gameObject);
    }
}