class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long maxi = nums[0];
        long long mini =nums[0];
        for(int num:nums){
            maxi=max(maxi,(long long)num);
            mini=min(mini, (long long)num);

        }
        return (maxi-mini)*k;
    }
};