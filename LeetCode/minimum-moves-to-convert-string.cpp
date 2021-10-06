class Solution {
public:
    int minimumMoves(string s) {
        int i=0,t=0;
        while(i<s.size()){
            if(s[i]=='O') i++;
            else {t++;i=i+3;}
        }
        return t;
    }
};