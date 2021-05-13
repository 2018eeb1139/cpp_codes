int divide(int x,int y){
	long long a=x,b=y;int sign=0;
	if((a>0 && b<0) || (a<0 && b>0)) sign=1;
	if(a<0) a=-a;
	if(b<0) b=-b;
	long long ans=0,temp=0;
	for(int i=31;i>=0;i--){
		if(temp+(b<<i)<=a){
			temp+=b<<i;
			ans+=1ll<<i;
		}
	}
	if(sign) ans=-ans;
	if(ans>INT_MAX || ans<INT_MIN) return INT_MAX;
	return ans;
}
