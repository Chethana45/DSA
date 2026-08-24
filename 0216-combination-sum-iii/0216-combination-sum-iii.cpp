class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;

    void backtrack(int start, int k, int target) {

        // We have selected k numbers
        if (current.size() == k) {
            if (target == 0) {
                ans.push_back(current);
            }
            return;
        }

        // Try numbers from start to 9
        for (int i = start; i <= 9; i++) {

            // If i is greater than target,
            // further numbers will also be greater
            if (i > target)
                break;

            current.push_back(i);

            backtrack(i + 1, k, target - i);

            // Undo the choice
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        backtrack(1, k, n);
        return ans;
    }
};