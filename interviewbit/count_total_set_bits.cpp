int total_set_bits(int n){
	if(n==0) return 0;
	int p=0;long long ans=0;
	while(pow(2,p)<=n) p++;
	p--;
	ans+=p*pow(2,p)/2+(n-pow(2,p)+1)+total_set_bits(n-pow(2,p));
	ans=ans%1000000007;
	return ans;
}
