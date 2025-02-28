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
        ListNode * travA = headA;
        int lenA = 0;
        while(travA){
            lenA++;
            travA=travA->next;
        }
        ListNode * travB = headB;
        int lenB = 0;
        while(travB){
            lenB++;
            travB=travB->next;
        }
        int diff = abs(lenA-lenB);
        ListNode *tempA = headA;
        ListNode *tempB = headB;
        if(lenA>lenB){
            while(diff){
                tempA = tempA->next;
                diff--;
            }
        }
        else if(lenA<lenB){
            while(diff){
                tempB = tempB->next;
                diff--;
            }
        }
        while(tempA){
            if(tempA==tempB) return tempA;
            tempA = tempA->next;
            tempB = tempB->next;
        }
        return nullptr;
    }
};