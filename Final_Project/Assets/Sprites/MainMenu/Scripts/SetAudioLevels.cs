/*
	Author: Ravi Teja Vedantam
*/

using UnityEngine;
using UnityEngine.Audio;

public class SetAudioLevels : MonoBehaviour {

	public AudioMixer mainMixer;

    //the audio that is changed here will be the background musicVol
    public void SetMusicLevel(float musicLvl)
	{
		mainMixer.SetFloat("musicVol", musicLvl); 
	}
    //the audio that is changed here will be the in game sound effectsVol
    public void SetSfxLevel(float sfxLevel)
	{
		mainMixer.SetFloat("sfxVol", sfxLevel); 
    }
	
}
