/**
 * LeetCode Problem: 412. Fizz Buzz
 * Problem Link: https://leetcode.com/problems/fizz-buzz/
 * Author: Andrés Ragot (github.com/andresragot)
 * Date: 2025-06-10
 */

class Solution 
{
public:
    vector < string > fizzBuzz (int n) 
    {
        vector < string > response;
        response.reserve (n);
        for (int i = 1; i <= n; ++i)
        {
            bool divisible_3 = ((i % 3) == 0);
            bool divisible_5 = ((i % 5) == 0);

            if (divisible_3 && divisible_5)
                response.emplace_back ("FizzBuzz");
            else if (divisible_3)
                response.emplace_back  ("Fizz");
            else if (divisible_5)
                response.emplace_back ("Buzz");
            else
                response.emplace_back (to_string (i));
        }
        
        return response;
    }
};