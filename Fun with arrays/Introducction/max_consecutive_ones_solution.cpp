/**
 * LeetCode Problem: Max Consecutive Ones
 * Problem Link: https://leetcode.com/explore/featured/card/fun-with-arrays/521/introduction/3238/
 * Author: Andrés Ragot (github.com/andresragot)
 * Date: 2025-06-10
 */


class Solution 
{
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int consecutive = 0, max_consecutive = 0;
        for (const auto & num : nums)
        {
            if (num == 1)
            {
                ++consecutive;
            }
            else
            {
                if (consecutive > max_consecutive)
                {
                    max_consecutive = consecutive;
                }        
                consecutive = 0;
            }
        }
        
        if (consecutive > max_consecutive)
        {
            max_consecutive = consecutive;
        }
        
        return max_consecutive;
    }
};