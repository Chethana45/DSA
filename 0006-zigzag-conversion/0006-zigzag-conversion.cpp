class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1||numRows>s.size())
        return s;
        vector<string> rows(numRows);
        int row=0;
        int dir=1;
        for(char c:s){
            rows[row]+=c;
            if(row==0)
                dir=1;
            else if(row==numRows-1)
                dir=-1;
            row+=dir;
        }
         string ans;

        for (string r : rows)
            ans += r;

        return ans;
        
    }
};