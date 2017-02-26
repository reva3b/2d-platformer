using UnityEngine;
using System.Collections;

public class MainMenuObject : MonoBehaviour {

	void Start()
	{
		DontDestroyOnLoad(this.gameObject);
	}
}
