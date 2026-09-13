class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans;

        for(int i=0; i<nums.size(); i++){
            int j=i;

            while(j+1<nums.size() && (long long)nums[j+1]==nums[j]+1)
                j++;

            if(i==j)
                ans.push_back(to_string(nums[i]));
            else
                ans.push_back(to_string(nums[i])+"->"+to_string(nums[j]));

            i=j;
        }

        return ans;
    }
};