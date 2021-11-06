Node *solve(vector<int> &a,int st,int end){
	if(st>end) return NULL;
	int mid=(st+end)/2;
	Node *root=new Node(a[mid]);
	root->left=solve(a,st,mid-1);
	root->right=solve(a,mid+1,end);
	return root;
}


Node *normalBSTtoBalancedBST(Node *root){
	vector<int> inorder=inorder(root);
	return solve(inorder,0,inorder.size()-1,);
}