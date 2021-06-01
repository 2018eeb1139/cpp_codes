/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
 ListNode *reverse(ListNode *head){
    ListNode *prev=NULL;
    ListNode *curr=head;
    ListNode *fur=head;
    while(fur){
        fur=fur->next;
        curr->next=prev;
        prev=curr;
        curr=fur;
    }
    return prev;
}

ListNode *middle(ListNode *head){
    ListNode *slow=head;
    ListNode *fast=head;
    while(fast->next && fast->next->next){
        slow=slow->next;fast=fast->next->next;
    }
    return slow;
}

int Solution::lPalin(ListNode* head) {
    ListNode *mid=middle(head);
    ListNode *temphead=mid->next;
    mid->next=NULL;
    temphead=reverse(temphead);
    while(head && temphead){
        if(head->val!=temphead->val) return 0;
        head=head->next;
        temphead=temphead->next;
    }
    return 1;
}
