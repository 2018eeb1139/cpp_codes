class Solution {
  public:
    // Return the Kth smallest element in the given BST
    void solve(Node *root,int &cnt,int K,int &ans){
        if(root==NULL) return;
        solve(root->left,cnt,K,ans);
        if(cnt==K){
            ans=root->data;
            cnt++;
            return;
        }
        else cnt++;
        solve(root->right,cnt,K,ans);
    }
    int KthSmallestElement(Node *root, int K) {
        // add code here.
        int cnt=1;
        int ans=-1;
        solve(root,cnt,K,ans);
        return ans;
    }
};