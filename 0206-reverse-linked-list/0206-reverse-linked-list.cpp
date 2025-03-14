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
    ListNode* helpReverseList(ListNode *head,ListNode *prev){
        if(head == NULL) return prev;
        ListNode *nextNode = head->next;
        head->next = prev;
        return helpReverseList(nextNode,head);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = NULL;
        return helpReverseList(head,prev);
    }
};