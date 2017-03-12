/*
	Author: Ravi Teja Vedantam
    Reference- https://gamedevelopment.tutsplus.com/tutorials/how-to-save-and-load-your-players-progress-in-unity--cms-20934
*/
using System.Collections.Generic;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using UnityEngine;
using System.Collections;

 
public static class SaveLoadManager
{
 public static List<Game> savedGames = new List<Game>();

    public static void Save()
    {
        //Debug.Log("Save to:" + Application.persistentDataPath);
        SaveLoadManager.savedGames.Add(Game.current);
        BinaryFormatter bf = new BinaryFormatter();
        FileStream file = File.Create(Application.persistentDataPath + "/saveFile.dat"); 
        bf.Serialize(file, SaveLoadManager.savedGames);
        file.Close();
    }

    public static void Load()
    {
        if (File.Exists(Application.persistentDataPath + "/saveFile.dat"))
        {
            BinaryFormatter bf = new BinaryFormatter();
            FileStream file = File.Open(Application.persistentDataPath + "/saveFile.dat", FileMode.Open);
            SaveLoadManager.savedGames = (List<Game>)bf.Deserialize(file);
            file.Close();
        }
    }
}