int sum_bit_pairwise(vector<int> a){
	//int n=arr.size();
	long long ans=0;
	for(int i=0;i<32;i++){
		for(int j=0;j<arr.size();j++){
			if(arr[j]&1) count++;
			arr[j]>>=1;
		}
		ans+=count*(arr.size()-count)*2;
	}
	return ans%1000000007;
}