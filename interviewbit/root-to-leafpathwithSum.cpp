/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void solve(TreeNode* root, int sum , vector<int> v, vector<vector<int>> &ans){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        v.push_back(root->val);
        if(root->val == sum)
            ans.push_back(v);
        return;
    }
    v.push_back(root->val);
    solve(root->left, sum-root->val, v, ans);
    solve(root->right, sum-root->val, v, ans);
    v.pop_back();
} 
 
vector<vector<int> > Solution::pathSum(TreeNode* root, int sum) {
    vector<vector<int>> ans;
    solve(root, sum, {}, ans);
    return ans;
}
