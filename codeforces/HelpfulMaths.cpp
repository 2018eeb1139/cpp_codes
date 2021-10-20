#include <bits/stdc++.h>
using namespace std;
#define ll long long int
const ll M=1e9+7;

int main() {
    string s;cin>>s;
    string res;
    for(int i=0;i<s.size();i++){
        if(s[i]=='1' or s[i]=='2' or s[i]=='3') res.push_back(s[i]);
    }
    sort(res.begin(), res.end());
    for(int i=1;i<res.size();i+=2) res.insert(i,"+");
    cout<<res;
}
