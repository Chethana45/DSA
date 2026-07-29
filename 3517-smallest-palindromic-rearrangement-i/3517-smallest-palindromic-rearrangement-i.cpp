class Solution {
public:
    string smallestPalindrome(string s) {

        vector<int> cnt(26, 0);

        for (char c : s)
            cnt[c - 'a']++;

        string left = "";
        char middle = '\0';

        for (int i = 0; i < 26; i++) {

            left += string(cnt[i] / 2, 'a' + i);

            if (cnt[i] % 2 == 1)
                middle = 'a' + i;
        }

        string right = left;
        reverse(right.begin(), right.end());

        if (middle == '\0')
            return left + right;

        return left + middle + right;
    }
};