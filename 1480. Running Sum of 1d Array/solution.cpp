/**
 * LeetCode Problem: 1480. Running Sum of 1d Array
 * Problem Link: https://leetcode.com/problems/running-sum-of-1d-array/
 * Author: Andrés Ragot (github.com/andresragot)
 * Date: 2025-06-10
 */

class Solution
{
public:
    vector < int > runningSum (vector < int > & nums)
    {
        int run = 0;
        for (auto & num : nums)
        {
            run += num;
            num = run;
        }
        return nums;
    }
};