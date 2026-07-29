class Solution {
public:
    using ll = long long;

    // nCr with overflow protection (caps at limit)
    ll comb(int n, int r, ll limit) {
        if (r > n) return 0;
        r = min(r, n - r);

        ll ans = 1;

        for (int i = 1; i <= r; i++) {
            ans = ans * (n - r + i) / i;
            if (ans > limit) return limit;
        }

        return ans;
    }

    // Count distinct permutations of multiset
    ll countWays(vector<int>& cnt, ll limit) {
        int total = 0;
        for (int x : cnt) total += x;

        ll ans = 1;
        int used = 0;

        for (int x : cnt) {
            if (x == 0) continue;

            ans *= comb(used + x, x, limit);

            if (ans > limit)
                return limit;

            used += x;
        }

        return ans;
    }

    string smallestPalindrome(string s, int k) {

        vector<int> freq(26, 0);

        for (char c : s)
            freq[c - 'a']++;

        vector<int> half(26);

        string mid = "";

        int len = 0;

        for (int i = 0; i < 26; i++) {

            half[i] = freq[i] / 2;

            len += half[i];

            if (freq[i] % 2)
                mid.push_back(char('a' + i));
        }

        if (countWays(half, (ll)k) < k)
            return "";

        string left;

        while (len--) {

            for (int c = 0; c < 26; c++) {

                if (half[c] == 0)
                    continue;

                half[c]--;

                ll ways = countWays(half, (ll)k);

                if (ways >= k) {
                    left.push_back(char('a' + c));
                    break;
                }

                k -= ways;
                half[c]++;
            }
        }

        string right = left;

        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};