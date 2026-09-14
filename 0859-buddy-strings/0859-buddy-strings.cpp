class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if (s.size() != goal.size()) return false;

        vector<int> diff;

        for (int i = 0; i < s.size(); i++)
            if (s[i] != goal[i])
                diff.push_back(i);

        if (diff.size() == 2)
            return s[diff[0]] == goal[diff[1]] &&
                   s[diff[1]] == goal[diff[0]];

        if (diff.size() == 0) {
            vector<int> cnt(26, 0);
            for (char c : s) {
                cnt[c - 'a']++;
                if (cnt[c - 'a'] >= 2) return true;
            }
        }

        return false;
    }
};