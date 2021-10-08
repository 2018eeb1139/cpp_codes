int symmetric(TreeNode* A, TreeNode* B){
    if(A==NULL and B==NULL) return 1;
    if(A==NULL or B==NULL) return 0;
    if(A->val!=B->val) return 0;
    
    return (symmetric(A->left,B->right) && symmetric(A->right,B->left));
}
int Solution::isSymmetric(TreeNode* root) {
    return symmetric(root,root);
}