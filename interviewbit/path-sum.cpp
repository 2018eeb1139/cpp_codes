/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* root, int sum) {
    if(root==NULL) return 0;
    if(root->left==NULL and root->right==NULL){
        if(root->val==sum) return 1;
        return 0;
    }
    bool l=hasPathSum(root->left,sum-root->val);
    bool r=hasPathSum(root->right,sum-root->val);
    return (l or r);
}
