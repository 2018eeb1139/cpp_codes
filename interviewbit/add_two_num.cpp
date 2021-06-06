/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode *reverse(ListNode *head){
    ListNode *prev=NULL;ListNode *curr=head;ListNode *fur=head;
    while(fur){
        fur=fur->next;
        curr->next=prev;
        prev=curr;
        curr=fur;
    }
    return prev;
}

ListNode *addtwonumbers(ListNode *h1,ListNode *h2){
    int carry=0;
    ListNode *temphead=new ListNode(-1);
    ListNode *temp=temphead;
    while(h1||h2||carry){
        int num=0;
        if(h1) num+=h1->val;
        if(h2) num+=h2->val;
        num+=carry;
        ListNode *nod=new ListNode(num%10);
        carry=num/10;
        temp->next=nod;
        temp=temp->next;
        if(h1) h1=h1->next;
        if(h2) h2=h2->next;
    }
    temp=reverse(temphead->next);
    while (temp->val==0 && temp) temp=temp->next;
    temp=reverse(temp);
    return temp;
}