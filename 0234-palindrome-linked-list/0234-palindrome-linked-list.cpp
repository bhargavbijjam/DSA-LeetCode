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
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL) return true;
        ListNode * slow = head;
        ListNode * fast = head;
        while(fast->next != NULL && fast->next->next!= NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode * newHead = slow->next;
        ListNode * temp = newHead;
        ListNode * prev = NULL;
        while(temp){
            ListNode *nextNode = temp->next;
            temp->next = prev;
            prev =temp;
            temp = nextNode;
        }
        while(head != NULL and prev != NULL){
            cout<<head->val<<" "<<prev->val<<endl;
            if(head->val != prev->val) return false;
            head = head->next;
            prev = prev->next;
        }
        return true;
    }
};