#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll M=1e9+7;

void stringTask(string s){
    string res;
    for(int i=0;i<s.size();i++){
        if(s[i]=='a' or s[i]=='A' 
            or s[i]=='e' or s[i]=='E' 
            or s[i]=='i' or s[i]=='I' 
            or s[i]=='o' or s[i]=='O' 
            or s[i]=='u' or s[i]=='U' 
            or s[i]=='y' or s[i]=='Y') {}
        else{
            res.push_back('.');
            res.push_back(tolower(s[i]));
        }
    }
    cout<<res;
}

int main() {
    string s;cin>>s;
    stringTask(s);
}
