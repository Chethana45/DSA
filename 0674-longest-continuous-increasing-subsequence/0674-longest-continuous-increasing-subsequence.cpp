class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int maxi=1;
        int count =1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                count++;
            }else{
                count=1;
            }
            maxi=max(maxi,count);
        }
       return maxi; 
    }
};