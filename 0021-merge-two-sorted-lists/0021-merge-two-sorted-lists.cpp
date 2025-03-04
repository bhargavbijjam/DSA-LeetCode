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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 and !list2) return nullptr; 
        if(!list1) return list2;
        if(!list2) return list1; 
        ListNode * dummy = new ListNode(-1);
        ListNode * tail = dummy;
        ListNode *temp1 = list1;
        ListNode *temp2 = list2;
        while(temp1 and temp2){
            if(temp1->val <= temp2->val){
                tail->next = temp1;
                temp1 = temp1->next;
            }
            else{
                tail->next = temp2;
                temp2 = temp2->next;
            }
            tail = tail->next;
        }
        if(!temp1) tail->next = temp2;
        else tail->next = temp1;
        return dummy->next;

    }
};