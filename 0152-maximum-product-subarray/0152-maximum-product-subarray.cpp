class Solution {
public:
    int maxProduct(vector<int>& nums) {
      int mini= nums[0];
      int maxi= nums[0];
      int ans= nums[0];
      for(int i=1;i<nums.size();i++){
        int x=nums[i];
        int newmax= max({x,x*mini,x*maxi});
        int newmin = min({x,x*mini,x*maxi});
           mini=newmin;
      maxi=newmax;
      ans=max(ans,maxi);
 
      }
        return ans;
    }
};