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
    ListNode *detectCycle(ListNode *head) {
        int count = 0;
        map<ListNode *,int> store;
        while(head){
            if(store.find(head)!=store.end()){
                cout<<"tail connects to a node index "<<store[head];
                break;
            }
            store[head] = count;
            count++;
            head=head->next;
        }
        if(!head) cout<<"no cycle";
        return head;
    }
};