#include <bits/stdc++.h>
using namespace std;

int findXor(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^(2*arr[i]);
    }
    return ans;
}

int main()
{
    int arr[3]={1,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findXor(arr,n);
    return 0;
}
