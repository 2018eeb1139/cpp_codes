int min_xor(vector<int> a){
	int n=a.size(),ans=INT_MAX;
	sort(a.begin,a.end());
	for(int i=0;i<n-1;i++) ans=min(ans,a[i]^a[i+1]);
	return ans;
}
