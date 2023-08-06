using System;
using System.Collections.Generic;

public class HelloWorld
{
    public static void Main(string[] args)
    {
        int[] items = { 2, 9, 5, 3, 7, 5 }; 
        int[] distinct;
        List<int> List = new List<int>();

        int n = items.Length;  
    
    
        for(int i=0; i<n;i++)  
        {  
            bool isDuplicate = false;  
            for(int j=0;j<i;j++)  
            {  

                if(items[i] == items[j])  
                {  
                    isDuplicate = true;  
                    break;  
                }  
            }  
    
            if(!isDuplicate)  
            {  
                List.Add(items[i]);
            }  
        }  

        distinct = List.ToArray();
        
        Console.WriteLine("Unique array elements: ");  
        for (int i = 0; i < distinct.Length; i++)
        {
           Console.WriteLine(distinct[i]);  
        }
    }
}
