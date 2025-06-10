/**
 * LeetCode Problem: 3342. Maximum Difference Between Even and Odd Frequency I
 * Problem Link: https://leetcode.com/problems/maximum-difference-between-even-and-odd-frequency-i/
 * Author: Andrés Ragot (github.com/andresragot)
 * Date: 2025-06-10
 */

class Solution 
{
public:
    int maxDifference(string s) 
    {
        unordered_map < char, int > map_difference;

        for (char & c : s)
        {
           map_difference[c]++;
        }

        int biggest_odd  = 0;
        int smallest_even = 100;
        for (const auto & it : map_difference)
        {
            if (it.second % 2 == 0)
            {
                if (it.second < smallest_even)
                    smallest_even = it.second;
            }
            else
            {
                if (it.second > biggest_odd)
                    biggest_odd = it.second;
            }
        }

        return biggest_odd - smallest_even;
    }
};
