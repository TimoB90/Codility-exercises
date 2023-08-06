using System;

namespace Arrays
{
	public class Arrays
	{
		public static void Main(string[] args)
		{
		    int[] arr = {1,2,3,4,5};
	            int[] array = {0,0,0,0,0};
		
		    int n = arr.Length; // gives length of an array
		       
		    int k = 1;
		    k = k % n;  
        
		    for (int i = 0; i < n; i++)
		    {
		       array[(i + k) % n] = arr[i];
                    }
        
	            for (int i = 0; i < n; i++) 
	            {
		       Console.WriteLine( "element: {0}" , array[i]); // prints last element of the array
	            }
		  
		}
	}
}