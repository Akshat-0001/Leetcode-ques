/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == NULL || node->next == NULL) return;

    // Copy data from the next node
    node->val = node->next->val;

    // Store pointer to the next node
   ListNode* temp = node->next;

    // Skip the next node
    node->next = node->next->next;

    // Delete the next node
    delete temp;
    
        
    }
};