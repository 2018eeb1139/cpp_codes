class Solution {
public:
    int trailingZeroes(int n) {
        int numberOfFives=0;
        while(n>=5){
            numberOfFives+=n/5;
            n=n/5;
        }
        return numberOfFives;
    }
};
