class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int ans=nums[0];
        for(int i=0;i<nums.size();i++){
            int product=1;
            for(int j=i;j<nums.size();j++){
                product*=nums[j];
                ans=max(ans,product);
            }
        }
        return ans;
    }
};