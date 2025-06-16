/**
 * LeetCode Problem: 2016. Maximum Difference Between Increasing Elements
 * Problem Link: https://leetcode.com/problems/maximum-difference-between-increasing-elements/
 * Author: Andrés Ragot (github.com/andresragot)
 * Date: 2025-06-16
 */

class Solution 
{
public:
    int maximumDifference(vector<int>& nums) 
    {
        int max_diff = -1;
        int diff = -1;
        int min = INT_MAX;
        for (int i = 0; i < nums.size () - 1; ++i)
        {
            min = std::min (min, nums[i]);
            diff = nums[i + 1] - min;
            if (max_diff < diff && diff != 0)
                max_diff = diff;
        }
        return max_diff;
    }
};