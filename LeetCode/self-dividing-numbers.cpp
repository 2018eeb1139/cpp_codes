class Solution {
    bool isSelfdividing(int n){
        string s=to_string(n);
        for(char c:s){
            if(c=='0'|| n%(c-'0')>0) return false;
        }
        return true;
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i=left;i<=right;i++){
            if(isSelfdividing(i)) v.push_back(i);
        }
        return v;
    }
};