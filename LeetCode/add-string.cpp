class Solution {
public:
    string addStrings(string num1, string num2) {
        string res="";int carry=0;
        int i=num1.length()-1;int j=num2.length()-1;
        while(i>=0||j>=0||carry!=0){
            int ival=i>=0?num1[i]-'0':0;
            int jval=j>=0?num2[j]-'0':0;
            i--;j--;
            int sum=ival+jval+carry;
            res=to_string(sum%10)+res;
            carry=sum/10;
        }
        return res;
    }
};