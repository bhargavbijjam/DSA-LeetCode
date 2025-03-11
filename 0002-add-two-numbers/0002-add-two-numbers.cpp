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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(!l1 && !l2) return nullptr;
        if(!l1) return l2;
        if(!l2) return l1;
        bool carry = false;
        ListNode * temp1 = l1;
        ListNode * temp2 = l2;
        ListNode* dummy = new ListNode(-1);
        ListNode* sum = dummy;    
        while(temp1 && temp2){
            int total = carry?(temp1->val+temp2->val+1):(temp1->val+temp2->val);
            sum->next = new ListNode(total);
            sum = sum->next;
            if(total<10) carry = false;
            else{
                carry = true;
                sum->val = sum->val % 10;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        if(!temp1) sum->next = temp2;
        if(!temp2) sum->next = temp1;
        while(carry && sum->next){
            sum = sum->next;
            sum->val = sum->val+1;
            if(sum->val<10) carry = false;
            else sum->val = sum->val%10; 
        }
        if(carry){
            sum->next = new ListNode(1);
            sum = sum->next;
            sum->next = NULL;
        }
        return dummy->next;
    }
};