class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {

        int n = nums.size();

        vector<pair<int,int>> a;

        for(int i = 0; i < n; i++) {
            a.push_back({nums[i], i});
        }

        sort(a.begin(), a.end());

        int start = 0;

        while(start < n) {

            int end = start;

            while(end + 1 < n &&
                  a[end + 1].first - a[end].first <= limit) {
                end++;
            }

            vector<int> pos;

            for(int i = start; i <= end; i++) {
                pos.push_back(a[i].second);
            }

            sort(pos.begin(), pos.end());

            for(int i = 0; i < pos.size(); i++) {
                nums[pos[i]] = a[start + i].first;
            }

            start = end + 1;
        }

        return nums;
    }
};