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
        ListNode *temp = head;
        stack<int> store;
        while(temp){
            store.push(temp->val);
            temp = temp->next;
        }
        while(head){
            if(head->val != store.top()) return false;
            head = head->next;
            store.pop();
        }
        return true;
    }
};