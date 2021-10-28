struct node *reverse(struct node *head, int k)
    { 
        node *curr=head,*next=head,*prev=NULL;
        int t=0;
        while(curr and t<k){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            t++;
        }
        if(next) head->next=reverse(next,k);
        return prev;
    }