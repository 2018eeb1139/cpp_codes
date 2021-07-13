class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> result(n);
        int high=n,low=1,index=0;
        result[index++]=low++;
        bool isHigh=false;
        while(k>1){
            result[index++]=high--;
            k--;
            isHigh=true;
            if(k>1){
                result[index++]=low++;
                k--;
                isHigh=false;
            }
        }
        while(index<n){
            if(isHigh) result[index++]=high--;
            else result[index++]=low++;
        }
        return result;
    }
};