class Solution {
public:
    int minimumPushes(string word) {

        vector<int> freq(26, 0);

        // Count frequency of each letter
        for (int i = 0; i < word.size(); i++) {
            freq[word[i] - 'a']++;
        }

        // Sort in descending order
        sort(freq.begin(), freq.end(), greater<int>());

        int ans = 0;
        int push = 1;

        for (int i = 0; i < 26; i++) {

            if (freq[i] == 0)
                break;

            ans += freq[i] * push;

            // After every 8 letters, increase push count
            if ((i + 1) % 8 == 0)
                push++;
        }

        return ans;
    }
};