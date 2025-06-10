/**
 * LeetCode Problem: 2236. Root Equals Sum of Children
 * Problem Link: https://leetcode.com/problems/root-equals-sum-of-children/
 * Author: Andrés Ragot (github.com/andresragot)
 * Date: 2025-06-10
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution 
{
public:
    bool checkTree(TreeNode* root) 
    {
        bool response = false;
        if (root)
        {
            if (root->left && root->right)
            {
                response = (root->val == (root->left->val + root->right->val));
            }
        }
        return response;
    }
};