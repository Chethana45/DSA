class Solution {
public:
    int solve(vector<int>& nums, int i, int j) {

        // Only one element left
        if(i == j)
            return nums[i];

        // Take left element
        int takeLeft = nums[i] - solve(nums, i + 1, j);

        // Take right element
        int takeRight = nums[j] - solve(nums, i, j - 1);

        // Choose the option giving maximum advantage
        return max(takeLeft, takeRight);
    }

    bool predictTheWinner(vector<int>& nums) {

        int result = solve(nums, 0, nums.size() - 1);

        return result >= 0;
    }
};