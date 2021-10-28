/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
TreeNode *solve(vector<int> &pre,vector<int> &in,int is,int ie,int ps,int pe){
    if(is>ie or ps>pe) return NULL;
    int rootVal=pre[ps];
    int idx=-1;
    for(int i=is;i<=ie;i++){
        if(rootVal==in[i]){
            idx=i;
            break;
        }
    }
    int len=(idx-1-is)+1;
    TreeNode *root=new TreeNode(rootVal);
    root->left=solve(pre,in,is,idx-1,ps+1,ps+len);
    root->right=solve(pre,in,idx+1,ie,ps+len+1,pe);
    return root;
}
TreeNode* Solution::buildTree(vector<int> &pre, vector<int> &in) {
    return solve(pre,in,0,in.size()-1,0,pre.size()-1);
}
