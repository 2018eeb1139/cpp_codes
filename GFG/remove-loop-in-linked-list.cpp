class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        Node *slow=head;
        Node *fast=head;
        while(fast and fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }
        if(slow!=fast) return;
        else if(slow==fast){
            slow=head;
            while(slow->next!=fast->next){
                fast=fast->next;
                slow=slow->next;
            }
            fast->next=NULL;
        }
        else if(slow==head){
            while(fast->next!=slow) fast=fast->next;
            fast->next=NULL;
        }
        return;
    }
};