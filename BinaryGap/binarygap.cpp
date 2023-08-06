using System;

namespace ObjectApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            var S = new Solution();
            Console.WriteLine(S.solution(35122));
        }
    }

    class Solution
    {
        public int solution(int n)
        {
            string bits = Convert.ToString(n, 2);

            int count = 0;
            int MaxCount = 0;

            for (int i = 0; i < bits.Length; i++)
            {
                if (bits[i] == '0')
                {
                  count++;
                } 
                else
                {
                  MaxCount = Math.Max(MaxCount, count);
                  count = 0;
                }
            }

            return MaxCount;
        }
    }
}
