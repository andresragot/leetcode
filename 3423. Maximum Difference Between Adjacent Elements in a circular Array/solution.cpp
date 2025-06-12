/**
 * LeetCode Problem: 3342. Maximum Difference Between Even and Odd Frequency I
 * Problem Link: https://leetcode.com/problems/maximum-difference-between-adjacent-elements-in-a-circular-array/
 * Author: Andrés Ragot (github.com/andresragot)
 * Date: 2025-06-12
 */

class Solution 
{
public:
    int maxAdjacentDistance(vector<int>& nums) 
    {
        int max_num = INT_MIN;

        for (int i = nums.size () - 1; i >= 0; --i)
        {
            int current = nums [i];
            int adjacent = nums [nums.size () - 1];
            if (i != 0)
                adjacent = nums [i - 1];

            max_num = max (abs (adjacent - current), max_num);
        }
        

        return max_num;
    }
};