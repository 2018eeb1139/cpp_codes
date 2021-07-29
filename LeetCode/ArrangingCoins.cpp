class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1) return 1;
        int i;
        for(i=1;i<=n;i++) n=n-i;
        return i-1;
    }
};