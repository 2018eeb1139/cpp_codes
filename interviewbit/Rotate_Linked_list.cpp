ListNode *rotateRight(ListNode *head,int k){
	ListNode *prev=head;ListNode *temp=head;
	int count=1;
	while(temp->next) {temp=temp->next;count++;}
	if(count==k) return head;
	k=k%count;
	int idx=count-k-1;
	while(idx--) prev=prev->next;
	temp->next=head;
	head=prev->next;
	prev->next=NULL;
	return head;
}
