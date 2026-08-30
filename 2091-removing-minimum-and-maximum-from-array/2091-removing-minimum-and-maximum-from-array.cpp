class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n= nums.size();
        int mini=0;
        int maxi=0;
        for(int i=0;i<n;i++){
        if(nums[i]<nums[mini])
            mini=i;
        
        if(nums[i]>nums[maxi])
            maxi=i;
        

    }
    if(mini>maxi)
    swap(mini,maxi);
    int left=maxi+1;
    int right=n-mini;
    int both = (mini+1)+(n-maxi);
    return min({left,right,both});
    }
};