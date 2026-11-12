class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int inc=1,dec=1, maxi=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                inc++;
                dec=1;

            }
            else if(nums[i]<nums[i-1]){
                dec++;
                inc =1;
            }else{
                dec=1;
                inc =1;
            }
              maxi= max(maxi,max(inc,dec));
        }
      return maxi;
    }
};