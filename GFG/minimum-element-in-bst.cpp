int minValue(Node* root) {
    // Code here
    if(root->left==NULL) return root->data;
    minValue(root->left);
}