using UnityEngine;

public class MainMenuObject : MonoBehaviour {

	void Start()
	{
		DontDestroyOnLoad(this.gameObject);
	}
}
