using System;

public class OddOccurrencesInArray
{
    public static void Main(string[] args)
    {
        int [] nArray = {9,1,9,3,9,3,9};
        var element = nArray[0];
  
        for(int i = 1; i < nArray.Length; i++) 
        {
             element = element ^ nArray[i];
        }
        
	Console.WriteLine( "element: {0}" , element);
    }
}
