#include<bits/stdc++.h>
using namespace std;

int longestValidParenthesis(string s)
{
	int sum=0;
	int maxi=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='(') sum+=1;
		else sum-=1;
		if(sum<0) break;
		if(sum==0) maxi=i+1;
	}
	return maxi;
}

int main()
{
	string s;cin>>s;
	cout<<longestValidParenthesis(s);
}