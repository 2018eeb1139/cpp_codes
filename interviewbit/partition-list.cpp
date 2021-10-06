/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* head, int val) {
    ListNode* front=new ListNode(0);
    ListNode* end=new ListNode(0);
    ListNode *f=front,*e=end;
    while(head){
        if(head->val<val){
            f->next=head;
            f=f->next;
        }
        else{
            e->next=head;
            e=e->next;
        }
        head=head->next;
    }
    e->next=NULL;
    f->next=end->next;
    return front->next;
}
