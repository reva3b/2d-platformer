using UnityEngine;
using UnityEngine.SceneManagement;


public class MainMenu : MonoBehaviour {



	public int sceneToStart = 1;										
	public bool changeScenes;											
	public bool changeMusicOnStart;										


	[HideInInspector] public bool inMainMenu = true;					
	[HideInInspector] public Animator animColorFade; 			
	[HideInInspector] public Animator animMenuAlpha;				
	 public AnimationClip fadeColorAnimationClip;		
	[HideInInspector] public AnimationClip fadeAlphaAnimationClip;		


	private SoundManager playMusic;										
	private float fastFadeIn = .01f;									
	private ShowButtons showPanels;									

	
	void Awake()
	{
		showPanels = GetComponent<ShowButtons> ();
        playMusic = GetComponent<SoundManager> ();
	}


	public void StartButtonClicked()
	{
		
		if (changeMusicOnStart) 
		{
			playMusic.FadeDown(fadeColorAnimationClip.length);
		}

		if (changeScenes) 
		{
			Invoke ("LoadDelayed", fadeColorAnimationClip.length * .5f);

			animColorFade.SetTrigger ("fade");
		} 

		else 
		{
			StartGameInScene();
		}

	}

    void OnEnable()
    {
        SceneManager.sceneLoaded += SceneWasLoaded;
    }

    void OnDisable()
    {
        SceneManager.sceneLoaded -= SceneWasLoaded;
    }

    void SceneWasLoaded(Scene scene, LoadSceneMode mode)
    {
		if (changeMusicOnStart)
		{
			playMusic.PlayLevelMusic ();
		}	
	}


	public void LoadDelayed()
	{
		inMainMenu = false;

		
		showPanels.HideMenu ();

		
		SceneManager.LoadScene (sceneToStart);
	}

	public void HideDelayed()
	{
		
		showPanels.HideMenu();
	}

	public void StartGameInScene()
	{
		
		inMainMenu = false;

		
		if (changeMusicOnStart) 
		{
			Invoke ("PlayNewMusic", fadeAlphaAnimationClip.length);
		}
		animMenuAlpha.SetTrigger ("fade");
		Invoke("HideDelayed", fadeAlphaAnimationClip.length);
		Debug.Log ("Game started in same scene!");
	}


	public void PlayNewMusic()
	{
		playMusic.FadeUp (fastFadeIn);
		playMusic.PlaySelectedMusic (1);
	}
}
