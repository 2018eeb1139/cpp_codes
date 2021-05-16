int single_number_II(vector<int> a){
	int ans=0;
	for(int i=0;i<32;i++){
		int count=0;
		for(int j=0;j<a.size();j++){
			if(a[j] & (1<<i)) count++;
		}
		if(count%3!=0) ans=ans | (1<<i);
	}
	return ans;
}