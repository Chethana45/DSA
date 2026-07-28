class Solution {
public:
    vector<vector<int>> dp;

    int solve(int i, int buy, vector<int>& prices){

        if(i >= prices.size())
            return 0;

        if(dp[i][buy] != -1)
            return dp[i][buy];

        if(buy){

            int take =
                -prices[i] +
                solve(i+1,0,prices);

            int skip =
                solve(i+1,1,prices);

            return dp[i][buy] =
                max(take,skip);
        }

        else{

            int sell =
                prices[i] +
                solve(i+2,1,prices);

            int hold =
                solve(i+1,0,prices);

            return dp[i][buy] =
                max(sell,hold);
        }
    }

    int maxProfit(vector<int>& prices) {

        dp.assign(prices.size(),
                  vector<int>(2,-1));

        return solve(0,1,prices);
    }
};