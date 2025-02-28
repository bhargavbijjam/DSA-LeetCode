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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode *,int> store;
        ListNode * tempA = headA;
        while(tempA){
            store[tempA] = tempA->val;
            tempA = tempA->next;
        }
        ListNode * tempB = headB;
        while(tempB){
            if(store.find(tempB)!=store.end()) break;
            tempB = tempB->next;
        }
        return tempB;
    }
};