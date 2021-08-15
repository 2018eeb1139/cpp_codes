int minFlips (string s)
{
    int t1=0,t2=0;
    for(int i=0;i<s.length();i++){
        if(i&1 && s[i]=='0') t1++;
        else if(((i&1)==0) && s[i]=='1') t1++;
        else if(i&1 && s[i]=='1') t2++;
        else if(((i&1)==0) && s[i]=='0') t2++;
    }
    return min(t1,t2);
}