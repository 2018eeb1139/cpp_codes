class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	int i=0,j=S.length()-1;
    bool flag=true;
    while(i<j){
        if(S[i]!=S[j]) {flag=false;break;}
        else {i++;j--;}
    }
    if(flag) return 1;
    else return 0;
	}

};