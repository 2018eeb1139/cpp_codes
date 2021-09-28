class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++) sum+=arr[i]; 
        if(sum%3!=0) return false;
        int sum1=sum/3;
        int sum2=2*sum1;
        int id1,id2;
        id1=id2=-1;
        sum=0;
       /*
	    it's a two pointer solution where we need to place two pointers
		between 0 and n-1(inclusive) if there is a solution exists.
	   */
        for(int i=0;i<arr.size()-1;i++){          
            sum+=arr[i];
            if(sum==sum1 && id1==-1) id1=i;
            else if(sum==sum2 && id1!=-1) {id2=i;break;}
      }
      return (id1!=-1 && id2!=-1);
    }
};