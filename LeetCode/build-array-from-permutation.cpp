#include <bits/stdc++.h>

using namespace std;


string sortingTheSentence(string s) {
vector<string> temp(9);
    string x="";
    int count=0;
    for(int i=0;i<s.length(); i++){
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) x+=s[i];
        else if(s[i]>='1'&&s[i]<='9'){
            int pos=s[i]-'1';
            temp[pos]=x;
            count++;
            x="";
        }
    }
    string res="";
    for(int i=0;i<count;i++){
        res+=temp[i];
        if(i!=count-1) res+=" ";
    }    
    return res;
 }

 int main()
 {
   string s="is2 sentence4 This1 a3";
   string s1="Myself2 Me1 I4 and3";
   string s2;cin>>s2;
   // string res=sortingTheSentence(s);
   // string res1=sortingTheSentence(s1);
   string res2=sortingTheSentence(s2);
   // cout<<res<<endl<<res1<<endl<<res2<<endl;
   cout<<res2<<endl;
 }