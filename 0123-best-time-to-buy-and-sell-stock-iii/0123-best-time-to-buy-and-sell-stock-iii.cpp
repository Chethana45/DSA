class Solution {
public:

    vector<vector<vector<int>>> dp;

    int solve(int i, int buy, int cap, vector<int>& prices){

        if(i == prices.size() || cap == 0)
            return 0;

        if(dp[i][buy][cap] != -1)
            return dp[i][buy][cap];

        if(buy){

            int take =
                -prices[i] +
                solve(i+1,0,cap,prices);

            int skip =
                solve(i+1,1,cap,prices);

            return dp[i][buy][cap] =
                max(take,skip);
        }

        else{

            int sell =
                prices[i] +
                solve(i+1,1,cap-1,prices);

            int hold =
                solve(i+1,0,cap,prices);

            return dp[i][buy][cap] =
                max(sell,hold);
        }
    }

    int maxProfit(vector<int>& prices) {

        int n = prices.size();

        dp.assign(n,
                  vector<vector<int>>(2,
                  vector<int>(3,-1)));

        return solve(0,1,2,prices);
    }
};