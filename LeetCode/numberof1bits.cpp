class Solution {
public:
    int hammingWeight(uint32_t n) {
        int t=0;
        while(n){
            t++;
            n=n & (n-1);
        }
        return t;
    }
};
