class Solution {
public:
    int myAtoi(string s) {
        
        int i=0;
        int n= s.size();
        while(i<n&&s[i]==' ')
        i++;
        int sign=1;
        if(i<n && (s[i]=='+'||s[i]=='-')){
        if(s[i]=='-')
        sign=-1;
        i++;}
        long long ans=0;
        while(i<n&& isdigit(s[i])){
            ans=ans*10 +(s[i]-'0');
            if(sign*ans> INT_MAX)
            return INT_MAX;
              if(sign*ans< INT_MIN)
            return INT_MIN;
            i++;
        }
        return sign*ans;
    }
};