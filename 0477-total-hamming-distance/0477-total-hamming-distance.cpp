class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {

        int ans = 0;
        int n = nums.size();

        for (int bit = 0; bit < 32; bit++) {

            int ones = 0;

            for (int x : nums) {
                if ((x >> bit) & 1)
                    ones++;
            }

            int zeros = n - ones;

            ans += ones * zeros;
        }

        return ans;
    }
};