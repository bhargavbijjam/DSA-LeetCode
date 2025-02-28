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
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *trav = head;
        vector<int> store;
        while(trav){
            store.push_back(trav->val);
            trav = trav->next;
        }
        sort(store.begin(),store.end());
        ListNode * temp = head;
        for(int i=0;i<store.size();i++){
            temp->val = store[i];
            temp = temp->next;
        }
        return head;
    }
};