class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > num * 9) return "";

        string ans = "";

        while (sum >= 9) {
            ans += '9';
            sum -= 9;
        }

        if (sum > 0)
            ans += to_string(sum);

        while (ans.size() < num)
            ans += '0';

        return ans;
    }
};