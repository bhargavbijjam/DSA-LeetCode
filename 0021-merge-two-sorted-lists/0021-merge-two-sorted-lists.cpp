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
        if(!list1 && !list2) return nullptr;
        if(!list1) return list2;
        if(!list2) return list1;
        ListNode * dummy = new ListNode(-1);
        ListNode * temp = dummy;
        ListNode * temp1 = list1;
        ListNode * temp2 = list2;
        while(temp1 && temp2){
            if(temp1->val<=temp2->val){
                temp->next = temp1;
                temp1 = temp1->next;
            }
            else{
                temp->next = temp2;
                temp2 = temp2->next;
            }
            temp = temp->next;
        }
        if(!temp1) temp->next = temp2;
        else temp->next = temp1;
        return dummy->next;

    }
};