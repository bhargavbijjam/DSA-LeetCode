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
        ListNode * tempA = headA;
        while(tempA){
            ListNode *tempB = headB;
            while (tempB){
                if(tempA==tempB) return tempB;
                tempB = tempB->next;
            }
            tempA = tempA->next;
        }
        return tempA;
    }
};