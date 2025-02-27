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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* traverse = head;
        int count = 0;
        map<int,ListNode *> store;
        while(traverse){
            store[count] = traverse;
            traverse = traverse->next;
            count ++;
        }
        ListNode * temp = head;
        if(head == store[count - n ]){
            head = head->next;
            return head;
        }
        while(temp->next != store[count - n ]){
            temp = temp->next;
        }
        if(temp!=NULL and temp->next!=NULL)temp->next = temp->next->next;
        return head;
    }
};