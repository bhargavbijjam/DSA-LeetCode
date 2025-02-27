/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*,int> store;
        while(head != NULL){
            if(store.find(head) != store.end()) return true;
            store[head] = head->val;
            head = head->next;
        }
        return false;
    }
};