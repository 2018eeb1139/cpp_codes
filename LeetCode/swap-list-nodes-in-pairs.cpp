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
    ListNode* swapPairs(ListNode* head) {
        ListNode* p=head;
        if(p==NULL or p->next==NULL) return p;
        ListNode* newhead=p->next;
        while(1){
        ListNode* q=p->next;
        ListNode* t=q->next;
        q->next=p;
        if(t==NULL or t->next==NULL){
            p->next=t;break;
        }
        p->next=t->next;
        p=t;
    }
    return newhead;
    }
};