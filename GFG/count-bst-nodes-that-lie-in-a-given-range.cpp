//Function to count number of nodes in BST that lie in the given range.
void solve(Node *root,int l,int h,int &t){
    if(root==NULL) return;
    if(root->data>=l and root->data<=h) t++;
    solve(root->left,l,h,t);
    solve(root->right,l,h,t);
}
int getCount(Node *root, int l, int h)
{
  // your code goes here   
  int t=0;
  solve(root,l,h,t);
  return t;
}