class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
       int left=0;
       int minLength = INT_MAX;
       int currentsum=0;
       int length=0;
       for(int right=0;right<nums.size();right++){
        currentsum+=nums[right];
        while(currentsum>=target){
            length=right-left+1;
            minLength= min(length,minLength);
            currentsum-=nums[left];
            left++;
        }
       }
       return (minLength==INT_MAX)?0:minLength;
    }
};