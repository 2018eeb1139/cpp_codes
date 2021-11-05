class Solution
{
    public:
    void solve(Node *root,int &cnt,int K,int &ans){
        if(root==NULL) return;
        solve(root->right,cnt,K,ans);
        if(cnt==K){
            ans=root->data;
            cnt++;
            return;
        }
        else cnt++;
        solve(root->left,cnt,K,ans);
    }
    int kthLargest(Node *root, int K)
    {
        //Your code here
        int cnt=1;
        int ans=-1;
        solve(root,cnt,K,ans);
        return ans;
    }
};