#include <bits/stdc++.h>

using namespace std;

vector<int> flip(string A) {
    int count=0;int max=INT_MIN;int l;int r;int temp=0;
    vector<int> res;
    for(int i=0;i<A.length();i++)
    if(A[i]=='1') count++;
    if(count==A.length()) return res;
    count=0;
    for(int i= 0;i<A.length();i++){
        if(A[i]=='0') count++;
        if(A[i]=='1') count--;
        if(count>max){
            max=count;
            l=temp;
            r=i;
        }
        if(count<0) {count=0;temp=i+1;}
    }
	res.push_back(l+1);
	res.push_back(r+1);
	return res;
}

int main()
{
	string str="111000";
	vector<int> res=flip(str);
	for(int i:res) cout<<i<<" ";
	cout<<endl;
}
