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
    ListNode * findMiddle(ListNode* head){
        ListNode *slow = head;
        ListNode *fast =head->next;
        while(fast->next && fast->next->next){
            slow = slow->next;
            fast=fast->next->next;
        }
        ListNode* middle = slow;
        return middle;
    }
    ListNode* merge(ListNode * head,ListNode * second){
        ListNode * dummy = new ListNode(-1);
        ListNode * temp = dummy;
        while(head && second){
            if(head->val<=second->val){
                temp->next = head;
                head = head->next;
            }
            else{
                temp->next = second;
                second = second->next;
            }
            temp = temp->next;
        }
        if(!head) temp->next = second;
        if(!second) temp->next = head;
        return dummy->next;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode* middle = findMiddle(head);
        ListNode* first = head;
        ListNode* second = middle->next;
        middle->next = NULL;
        first = sortList(first);
        second = sortList(second); 
        return merge(first,second);
    }

};