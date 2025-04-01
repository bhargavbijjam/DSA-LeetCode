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
    ListNode* oddEvenList(ListNode* head) {
        //if(!head) return nullptr;
        if(!head || !head->next || !head->next->next) return head;
        ListNode* evenHead = head->next;
        ListNode* evenTemp = head->next;
        ListNode* oddTemp = head;
        while(evenTemp and oddTemp and evenTemp->next and oddTemp->next){
            oddTemp->next = evenTemp->next;
            oddTemp = oddTemp->next;
            evenTemp->next = oddTemp->next;
            evenTemp = evenTemp->next;
        }
        oddTemp->next = evenHead;
        return head;


    }
};