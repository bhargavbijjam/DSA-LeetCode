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
    ListNode* reverseList(ListNode* head) {
        if(!head) return nullptr;
        if(!head && !head->next) return head;
        ListNode* prev = NULL;
        ListNode* temp = head;
        ListNode* nxtNode = head->next;   
        while(temp){
            temp->next = prev;
            prev = temp;
            temp = nxtNode;
            if(nxtNode) nxtNode = nxtNode->next;
        }
        return prev;
    }
};