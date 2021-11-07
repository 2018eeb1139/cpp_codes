class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int idx=-1;
	    int ans=0;
	    int t;
	    for(int i=0;i<n;i++){
	        t=0;
	        for(int j=0;j<m;j++){
	            if(arr[i][j]==1){
	                t++;
	            }
	        }
	        if(t>ans){
	            ans=t;
	            idx=i;
	        }
	    }
	    return idx;
	}

};