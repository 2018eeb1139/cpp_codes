ListNode *removeNthnodefromend(ListNode *head,int n){
	int count=0;
	ListNode *temp=head;
	while(temp){
		temp=temp->next;count++;
	}
	int didx=count-n;
	if(count==1) return NULL;
	if(n>=count) return head->next;
	temp=head;
	for(int i=1;i<didx;i++) temp=temp->next;
	temp->next=temp->next->next;
	return head;
}
