int Solution::solve(string a) {
    stack<char> s;
    for(int i=0;i<a.length();i++){
        if(a[i]=='(') s.push(a[i]);
        else {
            if(!s.empty()) s.pop();
            else return 0;
        }
    }
    if(s.size()==0) return 1;
    else return 0;
}
