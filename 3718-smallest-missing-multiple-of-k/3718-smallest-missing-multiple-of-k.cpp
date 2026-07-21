class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {

        int x = k;

        while (1) {

            bool found = false;

            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == x) {
                    found = true;
                    break;
                }
            }

            if (found == false)
                return x;

            x = x + k;
        }
    }
};