#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;cin>>s;
	long long int n=s.length();long long int t=0;
	for(int i=0;i<n;i++){
		if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
		t=t+(n-i);
	}
	cout<<t%10003<<endl;
}
