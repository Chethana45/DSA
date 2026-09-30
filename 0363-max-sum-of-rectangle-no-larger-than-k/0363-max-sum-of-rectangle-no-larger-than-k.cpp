class Solution {
public:

    int maxSubarraySum(vector<int>& arr, int k) {

        set<int> prefix;
        prefix.insert(0);

        int sum = 0;
        int res = INT_MIN;

        for (int x : arr) {

            sum += x;

            auto it = prefix.lower_bound(sum - k);

            if (it != prefix.end()) {
                res = max(res, sum - *it);
            }

            prefix.insert(sum);
        }

        return res;
    }

    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {

        int m = matrix.size();
        int n = matrix[0].size();

        int res = INT_MIN;

        for (int left = 0; left < n; left++) {

            vector<int> rowSum(m, 0);

            for (int right = left; right < n; right++) {

                for (int row = 0; row < m; row++) {
                    rowSum[row] += matrix[row][right];
                }

                res = max(res, maxSubarraySum(rowSum, k));

                if (res == k)
                    return k;
            }
        }

        return res;
    }
};