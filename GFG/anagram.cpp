class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        int v[26]={0};
        for(int i=0;i<a.size();i++) v[a[i]-'a']+=1;
        for(int i=0;i<b.size();i++) v[b[i]-'a']+=1;
        for(int i=0;i<26;i++){
            if(v[i]&1) return false;
        }
        return true;
    }

};