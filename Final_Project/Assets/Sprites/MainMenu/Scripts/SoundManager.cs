
/*
	Author: Ravi Teja Vedantam
    	Referenced from the free sprite known as game jam template in unity.

*/
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.SceneManagement;

public class SoundManager : MonoBehaviour {
    //monobehavior is applicable for the soundmanager

	public AudioClip titleMusic;					
	public AudioClip mainMusic;						
	public AudioMixerSnapshot volumeDown;	// volume changes with the useage of AudioMixerSnapshot. In this case it decreases.	
	public AudioMixerSnapshot volumeUp;		// volume increases		
    private AudioSource musicSource;				
	private float resetTime = .01f;		//time for the change to take place 			
	void Awake () 
	{
		musicSource = GetComponent<AudioSource> ();
	}
	public void PlayLevelMusic() //plays in game music
	{
		switch (SceneManager.GetActiveScene().buildIndex)
		{
			
			case 0:
				musicSource.clip = titleMusic;
				break;
			case 1:
				musicSource.clip = mainMusic;
				break;
		}
		FadeUp (resetTime);
		musicSource.Play ();
	}
	public void PlaySelectedMusic(int musicChoice)
	{// choice to change the mousic between titleMusic and mainMusic
        switch (musicChoice) 
		{
				case 0:
			musicSource.clip = titleMusic;
			break;
		case 1:
			musicSource.clip = mainMusic;
			break;
		}
		musicSource.Play ();
	}
	public void FadeUp(float fadeTime) // fadeup and fadeDown will take effect after the volume is changed
	{
		volumeUp.TransitionTo (fadeTime);
	}
	public void FadeDown(float fadeTime)
	{
		volumeDown.TransitionTo (fadeTime);
	}
}
