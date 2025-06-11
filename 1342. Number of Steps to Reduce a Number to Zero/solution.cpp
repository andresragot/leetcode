/**
 * LeetCode Problem: 1342. Number of Steps to Reduce a Number to Zero
 * Problem Link: https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
 * Author: Andrés Ragot (github.com/andresragot)
 * Date: 2025-06-10
 */


class Solution
{
public:
    int numberOfSteps(int num)
    {
        int response = 0;
        while (num != 0)
        {
            ++response;
            if (num & 1)
            {
                --num;
            }
            else
            {
                num *= 0.5;
            }
        }
        return response;
    }
};