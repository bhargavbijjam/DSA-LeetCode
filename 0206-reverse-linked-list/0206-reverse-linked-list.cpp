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
        if(head==NULL) return nullptr;
        if(head->next == NULL) return head;
        ListNode *temp = head->next;
        ListNode *prev = head;
        prev->next = nullptr;
        ListNode *front = temp->next;
        while(temp != NULL){
            temp->next = prev;
            prev = temp;
            temp = front;
            if(temp!=NULL) front = temp->next; 
        }
        return prev;


    }
};