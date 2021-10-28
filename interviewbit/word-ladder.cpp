class Solution {
public:
    int ladderLength(string st, string end, vector<string>& wordList) {
        queue<string> q;
        q.push(st);
        int wordSize=st.size();
        
        unordered_set<string> word(wordList.begin(),wordList.end());
        if(word.find(end)==word.end()) return 0;
        int len=0;
        while(!q.empty()){
            len++;
            int n=q.size();
            while(n--){
                string s=q.front();
                q.pop();
                for(int j=0;j<wordSize;j++){
                    char c=s[j];
                    for(char ch='a';ch<='z';ch++){
                        s[j]=ch;
                        if(s==end) return len+1;
                        if(word.find(s)==word.end()) continue;
                        word.erase(s);
                        q.push(s);
                    }
                    s[j]=c;
                }
            }
        }
        return 0;
    }
};