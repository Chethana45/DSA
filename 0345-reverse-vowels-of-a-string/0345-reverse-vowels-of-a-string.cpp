class Solution {
public:
    string reverseVowels(string s) {
        int i=0,j=s.size()-1;
        while(i<j){
            if(string("aeiouAEIOU").find(s[i])==string::npos) i++;
            else if(string("aeiouAEIOU").find(s[j])==string::npos) j--;
            else swap(s[i++],s[j--]);
        }
        return s;
    }
};