class Solution{
  public:
    // The given root is the root of the Binary Tree
    // Return the root of the generated BST
    void inorder(Node *root,vector<int> &v){
        if(root==NULL) return;
        inorder(root->left,v);
        v.push_back(root->data);
        inorder(root->right,v);
    }
    
    void inorder_bst(Node *root,vector<int> v,int &i){
        if(root==NULL) return;
        inorder_bst(root->left,v,i);
        root->data=v[i];
        i++;
        inorder_bst(root->right,v,i);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int> v;
        inorder(root,v);
        sort(v.begin(),v.end());
        int i=0;
         inorder_bst(root,v,i);
        return root;
    }
};