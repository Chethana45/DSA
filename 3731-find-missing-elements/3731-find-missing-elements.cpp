class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int i=nums[0];i<=nums.back();i++){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};