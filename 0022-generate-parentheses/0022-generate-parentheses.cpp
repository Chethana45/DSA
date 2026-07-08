class Solution {
public:
    vector<string> ans;

    void generate(string s, int open, int close, int n) {

        // Base case
        if (s.size() == 2 * n) {
            ans.push_back(s);
            return;
        }

        // Add '(' if we still have some left
        if (open < n) {
            generate(s + "(", open + 1, close, n);
        }

        // Add ')' only if it won't make the string invalid
        if (close < open) {
            generate(s + ")", open, close + 1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        generate("", 0, 0, n);
        return ans;
    }
};