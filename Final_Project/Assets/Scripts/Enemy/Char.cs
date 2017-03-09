using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public abstract class Char : MonoBehaviour {



	public Animator EnemyAnimator { get; private set; }

	[SerializeField]
	protected Transform BulletPosition;

	[SerializeField]
	protected float PlayerMovementSpeed; 

	protected bool IsPlayerFacingRight;

	[SerializeField]
	private GameObject BulletPrefab; 

	[SerializeField]
	protected int Health;

	[SerializeField]
	private EdgeCollider2D KinfeCollider;

	[SerializeField]
	private List<string> damageSources;

	public abstract bool IsDead { get; }

	public bool IPlayerAttacking { get; set; }

	public bool TakingDamage { get; set; }

	// Use this for initialization
	public virtual void Start () 
	{
		IsPlayerFacingRight = true;
		EnemyAnimator = GetComponent<Animator>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	public abstract IEnumerator TakeDamage();

	public void ChangeDirection()
	{
		IsPlayerFacingRight = !IsPlayerFacingRight;
		transform.localScale = new Vector3 (transform.localScale.x * -1, 1, 1);
	}

	public virtual void ThrowKnife(int value)
	{
		if (IsPlayerFacingRight)
		{
			GameObject tmp = (GameObject)Instantiate(BulletPrefab, BulletPosition.position, Quaternion.Euler(new Vector3(0, 0, 0)));
			tmp.GetComponent<Kunai>().Initialize (Vector2.right);

		}
		else
		{
			GameObject tmp = (GameObject)Instantiate(BulletPrefab, BulletPosition.position, Quaternion.Euler(new Vector3(0, 0, -180)));
			tmp.GetComponent<Kunai>().Initialize (Vector2.left); 



   }
 }
	public void PlayerAttacks()
	{
		KinfeCollider.enabled = !KinfeCollider.enabled;
	}



	public virtual void OnTriggerEnter2D(Collider2D other)
	{
		if (damageSources.Contains(other.tag))
		{
			StartCoroutine (TakeDamage());
		}
	}
}
