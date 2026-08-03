class Solution {
public:
    int maxSum(vector<int>& nums) {
        set<int> s;

        for(int x : nums) {
            if(x > 0)
                s.insert(x);
        }

        int sum = 0;

        for(int x : s)
            sum += x;

        if(sum > 0)
            return sum;

        return *max_element(nums.begin(), nums.end());
    }
};