class Solution
{
public:
    int t=0;
    bool find(Node *root,int node){
        if(root==NULL) return false;
        if(node==root->data) return true;
        else if(node<root->data) return find(root->left,node);
        else return find(root->right,node);
    }
    void solve(Node *root1,Node *root2,int x){
        if(root1==NULL) return;
        solve(root1->left,root2,x);
        if(find(root2,x-root1->data)) t++;
        solve(root1->right,root2,x);
    }
    int countPairs(Node* root1, Node* root2, int x)
    {
        t=0;
        solve(root1,root2,x);
        return t;
    }
};