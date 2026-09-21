class Solution {
public:
    vector<vector<int>> ans;
    
    void solve(vector<int>& candidates, int target, 
               int index, vector<int>& temp) {
        
        // Target reached
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        
        // Target became negative
        if (target < 0) {
            return;
        }
        
        for (int i = index; i < candidates.size(); i++) {
            
            // Choose
            temp.push_back(candidates[i]);
            
            // i, not i+1 because we can reuse the same number
            solve(candidates, target - candidates[i], i, temp);
            
            // Undo choice
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        solve(candidates, target, 0, temp);
        return ans;
    }
};