vector<int> Solution::prevSmaller(vector<int> &arr) {
    stack<int> s;int n=arr.size();
	vector<int> l(n);
	for(int i=0;i<n;i++){
		int x=-1;
		while(!s.empty() && s.top()>=arr[i]) s.pop();
		if(!s.empty()) x=s.top();
		l[i]=x;
		s.push(arr[i]);
	}
	return l;
}
