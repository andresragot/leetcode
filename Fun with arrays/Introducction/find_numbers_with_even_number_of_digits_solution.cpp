/**
 * LeetCode Problem: Find Numbers with Even Number of Digits
 * Problem Link: https://leetcode.com/explore/featured/card/fun-with-arrays/521/introduction/3237/
 * Author: Andrés Ragot (github.com/andresragot)
 * Date: 2025-06-10
 */


class Solution 
{
public:
    int findNumbers(vector<int>& nums) 
    {
        int count = 0;
        int response = 0;
        for (const auto & num : nums)
        {
            int temp = num;
            while (temp != 0)
            {
                temp /= 10;
                ++count;
            }
            
            if (not (count & 1))
            {
                ++response;
            }
            count = 0;
        }
        return response;
    }
};