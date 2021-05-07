#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,0};
	int n=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<*max_element(a,a+n);cout<<endl;
	cout<<*min_element(a,a+n);
	reverse(a,a+n);cout<<endl;
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
