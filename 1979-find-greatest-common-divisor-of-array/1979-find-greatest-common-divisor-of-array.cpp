class Solution {
public:
int gcd(int a,int b){
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
    int findGCD(vector<int>& nums) {
        int mn=nums[0];
        int mx=nums[0];
        for(int x:nums){
            mn=min(x,mn);
            mx=max(x,mx);
        }
       return gcd(mn,mx);
    }
};