using System;


namespace Arrays
{
	public static class Arrays
	{
		public static int[] solution(int[] A, int K)
		{
	      		int[] array = {0,0,0,0,0};
		        int n = A.Length; // gives length of an array
		        K = K % n;  
		    
        		for (int i = 0; i < n; i++)
		    	{
	        		 array[(i + K) % n] = A[i];
       			 }
        
		        for (int i = 0; i < n; i++) 
		        {
		           A[i] = array [i];
		           Console.WriteLine( "element: {0}" , array[i]); // prints last element of the array
		        }

		    return A;
		}

		public static void Main(string[] args)
		{
		  	int[] array = {1,3,4,5,6};
			array = solution (array,4);
		}
	}
}
