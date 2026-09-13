
  class Solution {
public:
    vector<int> numberOfLines(vector<int>& w, string s) {
        int lines = 1, width = 0;
        for(char c : s) {
            if(width + w[c-'a'] > 100) lines++, width = 0;
            width += w[c-'a'];
        }
        return {lines, width};
    }
};
