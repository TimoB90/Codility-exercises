using System;
// you can also use other imports, for example:
// using System.Collections.Generic;

// you can write to stdout for debugging purposes, e.g.
// Console.WriteLine("this is a debug message");

class Solution {
    public int solution(int[] A) 
    {
        // Implement your solution here
        int smallestNumber = 1;
        Array.Sort(A);
        for (int i = 0 ; i < A.Length; i++)
        {
            if (A[i] > 0 && A[i] == smallestNumber)
            {
                smallestNumber++;
            }
        }
        return smallestNumber;
    }
}
