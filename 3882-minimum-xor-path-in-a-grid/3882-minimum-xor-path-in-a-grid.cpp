class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int n = grid[0].size();
        vector<bitset<1024>> dp(n);  // dp[j][x]: XOR x can reach column j of the row above
        dp[0][0] = 1;
        for (auto& row : grid)
            for (int j = 0; j < n; j++) {
                auto reach = j ? dp[j] | dp[j - 1] : dp[j];  // come from above or from the left
                dp[j].reset();
                for (int x = 0; x < 1024; x++)
                    if (reach[x]) dp[j][x ^ row[j]] = 1;
            }
        int x = 0;
        while (!dp[n - 1][x]) x++;
        return x;
    }
};