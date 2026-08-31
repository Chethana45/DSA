class Solution {
public:
bool nextper(vector<int>&nums){
    int n= nums.size();
    int i=n-2;
    while(i>=0&&nums[i]>=nums[i+1]){
        i--;
    }
    if(i<0){
        return false;}
        int j=n-1;
        while(nums[j]<=nums[i]){
            j--;
        }
        swap(nums[i],nums[j]);
    
    reverse(nums.begin()+i+1,nums.end());
return true;
}

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        ans.push_back(nums);
        while(nextper(nums)){
            ans.push_back(nums);
        }
return ans;
    }

};