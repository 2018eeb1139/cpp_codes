#include <bits/stdc++.h>

using namespace std;

int majority_element(int a[],int n){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++) m[a[i]]++;
    int t=0;int mj;
    for(auto i:m){
        if(i.second>n/2) {t=1;mj=i.first;break;}
    }
    if(t==0) return -1;
    else return mj;
}


int main()
{
    int a[]={2,2,2,2,5,5,2,3,3};    
    int n=sizeof(a)/sizeof(a[0]);
    cout<<majority_element(a,n)<<endl;
}