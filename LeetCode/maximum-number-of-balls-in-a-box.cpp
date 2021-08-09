class Solution {
    int sumOfDigits(int n){
        int sum=0;
        while(n){
            sum+=(n%10);
            n/=10;
        }
        return sum;
    }
public:
    int countBalls(int lowLimit, int highLimit) {
        vector<int> v(100000);
        for(int i=lowLimit;i<=highLimit;i++) v[sumOfDigits(i)]++;
        return *max_element(v.begin(),v.end());
    }
};