class Solution
{
public:
    void solve(Node *root,Node *&prev){
        if(root==NULL) return;
        solve(root->left,prev);
        if(prev){
            prev->next=root;
        }
        prev=root;
        solve(root->right,prev);
    }
    void populateNext(Node *root)
    {
        //code here
        Node *prev=NULL;
        solve(root,prev);
    }
};