using System;
using System.Collections.Generic;

public class DominoTile
{
    public static void Main(string[] args)
    {
        string[] DominoTiles = {"0-0", "0-1", "1-2", "2-3"};
        HashSet<string> TileSet = new HashSet<string>();
        string Result = "";
        
        foreach (string i in DominoTiles) 
        {
            string reversedTile = i[2] + "-" + i[0];
            TileSet.Add(i);
            TileSet.Add(reversedTile);
        } 
        
        for(int i=0; i<=6; i++)
        {
            for(int j=0; j<=6; j++)
            {
                string tmpTile = i + "-" + j;
                if(!TileSet.Contains(tmpTile))
                {
                    Result += tmpTile + ",";
                }
            }
        }
        Console.WriteLine (Result);
    }
}
