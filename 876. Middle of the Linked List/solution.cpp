/**
 * LeetCode Problem: 876. Middle of the Linked List
 * Problem Link: https://leetcode.com/problems/middle-of-the-linked-list/
 * Author: Andrés Ragot (github.com/andresragot)
 * Date: 2025-06-10
 */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution 
{
public:
    ListNode* middleNode(ListNode* head) 
    {
        int size = 1;
        ListNode * ref = head->next;
        while (ref)    
        {
            ++size;
            ref = ref->next;
        }

        size = size * 0.5 + 1;

        ref = head;

        for (int i = 1; i < size; ++i)
        {
            ref = ref->next;
        }

        return ref;
    }
};