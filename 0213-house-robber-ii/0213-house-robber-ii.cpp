class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
        return nums[0];
        int prev1=0;
        int prev2=0;
        for(int i=0;i<n-1;i++){
            int a=nums[i]+prev2;
            int b= prev1;
            int current=max(a,b);
         prev2=prev1;
         prev1=current;
        }
        int ans1=prev1;

        prev1=0;
        prev2=0;
        for(int i=1;i<n;i++){
            int a= nums[i]+prev2;
            int b=prev1;
            int current=max(a,b);
            prev2=prev1;
            prev1=current;
        }
        int ans2=prev1;

        return max(ans1,ans2);
        
    }
};