class Solution {
  public:
    int countSquares(int N) {
        // code here
        int cnt=0;
        for(int i=1;i<N;i++){
            if(i*i>=N) break;
            else cnt++;
        }
        return cnt;
        
    }
};