class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> freq;

        for (char c : s) {
            freq[c]++;
        }

        int length = 0;
        bool odd = false;

        for (auto x : freq) {
            if (x.second % 2 == 0) {
                length += x.second;
            }
            else {
                length += x.second - 1;
                odd = true;
            }
        }

        if (odd)
            length++;

        return length;
    }
};