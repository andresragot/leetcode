/**
 * LeetCode Problem: 1672. Richest Customer Wealth
 * Problem Link: https://leetcode.com/problems/richest-customer-wealth/
 * Author: Andrés Ragot (github.com/andresragot)
 * Date: 2025-06-10
 */

class Solution 
{
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int maximum = 0;
        int local_max = 0;
        for (const auto & account : accounts)
        {
            for (const auto & val : account)
            {
                local_max += val;
            }

            if (local_max > maximum)
            {
                maximum = local_max;
            }
            local_max = 0;
        }
        return maximum;
    }
};