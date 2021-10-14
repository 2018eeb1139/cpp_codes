int Solution::braces(string A) {
    stack<char> s;
    for(char c:A){
        if(c==')'){
            int cnt=0;
            while(!s.empty() and s.top()!='(') {s.pop();cnt++;}
            if(cnt<=1) return 1;
            s.pop();
        }
        else s.push(c);
    }
    return 0;
}
