ListNode *deleteduplicates(ListNode *head){
	ListNode *temp=head;
	while(temp->next!=NULL){
		if(temp->val==temp->next->val) temp->next=temp->next->next;
		else temp=temp->next;
		}
	return head;
}