class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        for(int x:nums){
            ans.push_back(x);
        }
          for(int x:nums){
            ans.push_back(x);
        }
      return ans;  
    }
};