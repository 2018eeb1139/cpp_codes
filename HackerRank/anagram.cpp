#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;cin>>s;
	int len=s.length();
	if(len%2==1) cout<<"-1";
	else{
		int freq[26]={0};
		for(int i=0;i<len/2;i++) freq[s[i]-'a']++;
		for(int i=0;i<26;i++) cout<<char(i+97)<<": "<<freq[i]<<"\t";
		for(int j=len/2;j<len;j++) freq[s[j]-'a']--;cout<<endl;
		for(int j=0;j<26;j++) cout<<char(j+97)<<": "<<freq[j]<<"\t";
	int sum=0;
	for(int i=0;i<26;i++){
		if(freq[i]>0) sum=sum+freq[i];
		}
	cout<<sum;
	}
}
