/**
 * LeetCode Problem: 2235. Add Two Integers
 * Problem Link: https://leetcode.com/problems/add-two-integers/
 * Author: Andrés Ragot (github.com/andresragot)
 * Date: 2025-06-10
 */

class Solution 
{
public:
    int sum(int num1, int num2) 
    {
        if (-100 > num1)
            num1 = -100;
        
        if (100 < num2)
            num2 = 100;

        return num1 + num2;
    }
};