class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int depth=0;
        for(int c:s){
            if(c=='('){
                if(depth>0){
                    ans+=c;
                }
                depth++;
            }
            else{
                depth--;
                if(depth>0){
                    ans+=c;
                }
            }
        }
      return ans;

    }
};