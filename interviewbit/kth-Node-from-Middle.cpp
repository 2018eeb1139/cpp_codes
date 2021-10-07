/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 int length(ListNode* head){
     ListNode* temp=head;int t=0;
     while(temp){
         t++;
         temp=temp->next;
     }
     return t;
 }
int Solution::solve(ListNode* head, int B) {
    ListNode* slow=head,*fast=head;
    while(fast and fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* t=head;
    slow->next=NULL;
    int len=length(head);
    int n=len-B;
    if(n<1) return -1;
        for(int i=0;i<n-1;i++){
            t=t->next;
        }
    return t->val; 
}
