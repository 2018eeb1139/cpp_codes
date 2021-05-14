#include <bits/stdc++.h>

using namespace std;

long long sum(vector<int> &v){
	long long s=0;
	for(int i:v) s+=i;
	return s;
}

bool isvalid(vector<int> &b,int k,int pg){
	int st=1;int long long s1=0;
	for(int i:b){
		s1+=i;
		if(s1>pg) {st++;s1+=i;}
	}
	if(st>k) return false;
	else return true;
}

int allocate_books(vector<int> &book,int k){
	if(book.size()<k) return -1;
	long long start=*max_element(book.begin(),book.end());
	long long end=sum(book);int res=-1;
	while(start<=end){
		long long mid=start+(end-start)/2;
		if(isvalid(book,k,mid)) {res=mid;end=mid-1;}
		else start=mid+1;
	}
	return res;
}
int main()
{
	vector<int> book={ 73, 58, 30, 72, 44, 78, 23, 9};
	int k=5;cout<<allocate_books(book,k)<<endl;
}
