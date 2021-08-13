#include <bits/stdc++.h>
using namespace std;

string toHex(int num) {
        if(num == 0) return "0";
        string ans;
        vector<char> digits = {'0', '1', '2', '3', '4', '5', '6', '7',
                        '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
        unsigned int unum;
        cout<<(unsigned int)num<<endl;
        if(num < 0) {unum = UINT_MAX + 1 + (unsigned int)num;}
        else unum = num;
        while(unum > 0){
            cout<<unum%16<<endl;
            ans = digits[unum%16] + ans;
            unum/=16;
            cout<<unum<<endl;
        }
        return ans;
    }

int main()
{
    int num=-2;
    cout<<toHex(num)<<endl;
}

