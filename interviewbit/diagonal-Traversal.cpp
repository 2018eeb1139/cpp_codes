/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
void preorder(TreeNode *root,map<int,vector<int>> &m,int dig){
    if(root==NULL) return;
    m[dig].push_back(root->val);
    preorder(root->left,m,dig+1);
    preorder(root->right,m,dig);
}
vector<int> Solution::solve(TreeNode* root) {
    vector<int> ans;
    map<int,vector<int>> m;
    preorder(root,m,0);
    for(auto it=m.begin();it!=m.end();it++){
        vector<int> v=it->second;
        for(int i=0;i<v.size();i++) ans.push_back(v[i]);
    }
    return ans;
}
