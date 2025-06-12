/**
 * LeetCode Problem: 4. Median of Two Sorted Arrays
 * Problem Link: https://leetcode.com/problems/median-of-two-sorted-arrays/
 * Author: Andrés Ragot (github.com/andresragot)
 * Date: 2025-06-12
 */
class Solution 
{
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        auto merged = merged_array (nums1, nums2);
        int middle = merged.size () * 0.5;

        sort(merged.begin(), merged.end());

        if (merged.size () & 1)
        {
            return merged[middle];
        }

        return (merged[middle] + merged[middle - 1]) * 0.5;
    }
private:
    vector<int> merged_array (vector < int > & nums1, vector < int > & nums2)
    {
        vector < int > result;
        result.reserve(nums1.size() + nums2.size());
        result.insert(result.end(), nums1.begin(), nums1.end());
        result.insert(result.end(), nums2.begin(), nums2.end());

        return result;
    }
};