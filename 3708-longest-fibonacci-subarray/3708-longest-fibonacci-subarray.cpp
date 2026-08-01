class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int len=2;
        int maxlen=2;
        int n=nums.size();
        if(n<2){
            return n;
        }
        for(int i=2;i<n;i++){
if(nums[i]==nums[i-1]+nums[i-2]){
    len++;
} else{
    len=2;
}
maxlen=max(len,maxlen);
        }
        return maxlen;
        
    }
};