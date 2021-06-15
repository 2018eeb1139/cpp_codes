#include <bits/stdc++.h>

using namespace std;

 string toLowerCase(string s) {
        for(int i=0;i<s.length();i++) {
            if(s[i]>=65 && s[i]<=90) s[i]=s[i]+32;
        }
        return s;
    }
    
int main()
{
	string s=toLowerCase("Hello");
	cout<<s<<endl;
}
