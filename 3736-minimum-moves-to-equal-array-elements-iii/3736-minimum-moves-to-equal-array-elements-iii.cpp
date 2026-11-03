
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx = 0;
        int sum = 0;

        for(int x : nums) {
            mx = max(mx, x);
            sum += x;
        }

        return mx * nums.size() - sum;
    }
};
