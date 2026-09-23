class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;

        for(int i = 0; i < matrix.size(); i++) {
            
            // Find minimum in current row
            int mini = *min_element(matrix[i].begin(), matrix[i].end());

            // Find column of that minimum
            int col = 0;
            for(int j = 0; j < matrix[i].size(); j++) {
                if(matrix[i][j] == mini) {
                    col = j;
                    break;
                }
            }

            // Check if it is maximum in its column
            bool lucky = true;

            for(int k = 0; k < matrix.size(); k++) {
                if(matrix[k][col] > mini) {
                    lucky = false;
                    break;
                }
            }

            if(lucky)
                ans.push_back(mini);
        }

        return ans;
    }
};