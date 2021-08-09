class Solution {
public:
    bool checkIfPangram(string sentence) {
        int a[26]={0};
        for(char c:sentence) a[c-'a']++;
        for(int i=0;i<26;i++){
            if(a[i]==0) return false;
        }
        return true;
    }
};