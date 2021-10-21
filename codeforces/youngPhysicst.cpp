#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll M=1e9+7;

int main()
{
    int n;cin>>n;
    int sumx=0,sumy=0,sumz=0;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        sumx+=x;sumy+=y;sumz+=z;
    }
    // cout<<sumx<<" "<<sumy<<" "<<sumz<<endl;
    if(sumx==0 and sumy==0 and sumz==0)
        cout<<"YES";
    else cout<<"NO";
}