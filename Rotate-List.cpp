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
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {

        if (!head || !head->next || k == 0)
            return head;

        ListNode* tail = head;
        int length = 1;

        while (tail->next) {
            tail = tail->next;
            length++; // finds length of LL
        }

        // finds if k is >= length
        k = k % length;
        if (k == 0)
            return head;

        // finding new tail

        ListNode* newtail = head;
        for (int i = 1; i < length - k; i++) {
            newtail = newtail->next;
        }

        ListNode* newhead= newtail->next;
        newtail->next=NULL;

        tail->next=head;
        return newhead;
    }
};