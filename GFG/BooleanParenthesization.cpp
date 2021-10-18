unordered_map<string,int> m;
class Solution{
public:

    int solve(string s,int i,int j, bool isTrue){
        if(i>j) return 0;
        if(i==j){
            if(isTrue==true) return (s[i]=='T');
            else return (s[i]=='F');
        }
        string temp=to_string(i);
        temp.push_back(' ');
        temp.append(to_string(j));
        temp.push_back(' ');
        temp.append(to_string(isTrue));
        if(m.find(temp)!=m.end()) return m[temp];
        int ans=0;
        for(int k=i+1;k<=j-1;k+=2){
            int lF=solve(s,i,k-1,false);
            int lT=solve(s,i,k-1,true);
            int rF=solve(s,k+1,j,false);
            int rT=solve(s,k+1,j,true);
            if(s[k]=='&'){
                if(isTrue==true) ans+=lT*rT;
                else ans+= lF*rF + lF*rT +lT*rF; 
            }
            else if(s[k]=='|'){
                if(isTrue==true) ans+=lF*rT + lT*rF + lT*rT;
                else ans+= lF*rF;
            }
            else if(s[k]=='^'){
                if(isTrue==true) ans+= lT*rF + lF*rT;
                else ans+= lT*rT + lF*rF;
            }
        }
        m[temp]=(ans%1003);
        return (ans%1003);
    }

    int countWays(int N, string S){
        m.clear();
        return solve(S,0,N-1,true);
    }
};