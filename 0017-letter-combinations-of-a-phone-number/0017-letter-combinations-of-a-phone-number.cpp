class Solution {
public:
    vector<string> ans;
    
    string mp[10] = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void backtrack(string digits, int i, string s) {
        
        if(i == digits.size()) {
            ans.push_back(s);
            return;
        }

        string letters = mp[digits[i] - '0'];

        for(char c : letters) {
            backtrack(digits, i + 1, s + c);
        }
    }

    vector<string> letterCombinations(string digits) {
        
        if(digits == "")
            return {};

        backtrack(digits, 0, "");
        
        return ans;
    }
};