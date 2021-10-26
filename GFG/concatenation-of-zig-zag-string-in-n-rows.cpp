lass Solution{
    public:
    string convert(string s, int n) {
        //code
        if(n==1) return s;
        string arr[n];string ans;
        int row=0;bool down;
        for(int i=0;i<s.size();i++){
            arr[row].push_back(s[i]);
            if(row==n-1) down=false;
            else if(row==0) down=true;
            down?row++:row--;
        }
        for(int i=0;i<n;i++) ans+=arr[i];
        return ans;
    }
};