class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentsum=0;
        int maxsum= nums[0];
        for(int i=0;i<nums.size();i++){
            currentsum+=nums[i];
            maxsum=max(maxsum,currentsum);
             if(currentsum<0)
        currentsum=0;
        }
       
        return maxsum;
        
    }
};