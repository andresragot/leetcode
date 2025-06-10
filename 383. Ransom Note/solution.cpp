/**
 * LeetCode Problem: 383. Ransom Note
 * Problem Link: https://leetcode.com/problems/ransom-note/
 * Author: Andrés Ragot (github.com/andresragot)
 * Date: 2025-06-10
 */

class Solution 
{
public:
    bool canConstruct(string ransomNote, string magazine) 
    {
        std::string::size_type n;
        const string blank = " ";
        bool response = true;
        for (const auto & c : ransomNote)
        {
            n = magazine.find (c);
            if (std::string::npos == n)
            {
                response = false;
                break;
            }
            else
            {
                magazine.replace (n, 1, blank);
            }
        }
    
        return response;
    }
};