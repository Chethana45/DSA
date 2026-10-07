class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;

        sort(nums.begin(), nums.end());

        vector<pair<int,int>> freq;

        for(int i = 0; i < nums.size(); ) {
            int count = 0;
            int j = i;

            while(j < nums.size() && nums[i] == nums[j]) {
                count++;
                j++;
            }

            freq.push_back({count, nums[i]});
            i = j;
        }

        // Find maximum k times
        for(int x = 0; x < k; x++) {

            int maxIndex = 0;

            for(int i = 1; i < freq.size(); i++) {
                if(freq[i].first > freq[maxIndex].first) {
                    maxIndex = i;
                }
            }

            ans.push_back(freq[maxIndex].second);

            // Don't select again
            freq[maxIndex].first = -1;
        }

        return ans;
    }
};