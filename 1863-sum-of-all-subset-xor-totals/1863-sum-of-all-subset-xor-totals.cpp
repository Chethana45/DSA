class Solution {
public:
    int solve(vector<int>& nums, int index, int xr) {

        // Base case
        if (index == nums.size()) {
            return xr;
        }

        // Take current element
        int take = solve(nums, index + 1, xr ^ nums[index]);

        // Don't take current element
        int notTake = solve(nums, index + 1, xr);

        return take + notTake;
    }

    int subsetXORSum(vector<int>& nums) {
        return solve(nums, 0, 0);
    }
};