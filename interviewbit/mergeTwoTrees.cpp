/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::solve(TreeNode* root1, TreeNode* root2) {
    if(root1==NULL and root2==NULL) return NULL;
    if(root1==NULL or root2==NULL){
        if(root1==NULL) return root2;
        else return root1;
    }
    if(root1 and root2) root1->val=root1->val+root2->val;
    root1->left=solve(root1->left,root2->left);
    root1->right=solve(root1->right,root2->right);
    return root1;
}
