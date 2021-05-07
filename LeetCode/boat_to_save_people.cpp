#include <bits/stdc++.h>
 
using namespace std; 
 
int numRescueBoats(vector<int>& people,int limit){
        sort(people.begin(),people.end());
        int i=0,j=people.size()-1;
        int boats=0;
        while(i<=j){
            if(people[i]+people[j]>limit) j--;
            else {i++;j--;}
            boats++;
        }
        return boats;
}

int main()
{
	vector<int> people={4,1,2,1,2};
	int limit=5;
	int boats=numRescueBoats(people,limit);
	cout<<boats<<endl;
}
