/*
	Author: Ravi Teja Vedantam
*/

using UnityEngine;
using UnityEngine.SceneManagement;


public class MainMenu : MonoBehaviour {

    //MainMenu the main component that allows the player to play the game, choose the settings, and quit if needed

	public int sceneToStart = 1;	//this scene=1 sequence will be loaded to open main menu									
	public bool changeScenes;											
	public bool changeMusicOnStart;		//music will start to play 								

    // hide in inspector will not show up in the inspector, but it will be in serialized form
	[HideInInspector] public bool inMainMenu = true;					
	[HideInInspector] public Animator animColorFade; 			
	[HideInInspector] public Animator animMenuAlpha;				
	 public AnimationClip fadeColorAnimationClip;		
	[HideInInspector] public AnimationClip fadeAlphaAnimationClip;		
    // set of animations that makes the main menu appear smooth

	private SoundManager playMusic;										
	private float fastFadeIn = .01f;									
	private ShowButtons showPanels;     //calling the showbuttons to show the settings panel							

    // getting required component that shows the settings panel as well as pause panel when the scene is changed
    void Awake()
	{
		showPanels = GetComponent<ShowButtons> (); 
        playMusic = GetComponent<SoundManager> (); //gettings required component that uses soundmanager to allow the music to be played
	}

    // when the play button is clicked the following if statements will run and execute the scene
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
    // scene loaded
    void OnEnable()
    {
        SceneManager.sceneLoaded += SceneWasLoaded; 
    }
    // scene unloaded
    void OnDisable()
    {
        SceneManager.sceneLoaded -= SceneWasLoaded;
    }
    // once the scene is loaded the music will change from background to in game
    void SceneWasLoaded(Scene scene, LoadSceneMode mode) 
    {
		if (changeMusicOnStart)
		{
			playMusic.PlayLevelMusic ();
		}	
	}

    //When the scene is loaded the main menu shall disappear
	public void LoadDelayed() 
	{
		inMainMenu = false;	
		showPanels.HideMenu ();	
		SceneManager.LoadScene (sceneToStart);
	}
    //When the scene is loaded the main menu shall disappear
   public void HideDelayed()
	{
	showPanels.HideMenu();
	}
    // The game in scene shall be loaded after the player clicks the paly button
	public void StartGameInScene()
	{
		inMainMenu = false;
if (changeMusicOnStart) 
		{
			Invoke ("PlayNewMusic", fadeAlphaAnimationClip.length);
		}
		animMenuAlpha.SetTrigger ("fade");
		Invoke("HideDelayed", fadeAlphaAnimationClip.length);
    }
// in game music is expected to be played
public void PlayNewMusic()
	{
		playMusic.FadeUp (fastFadeIn);
		playMusic.PlaySelectedMusic (1);
	}
}
