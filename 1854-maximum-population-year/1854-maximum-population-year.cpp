class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int cnt[101] = {};

        for(auto x : logs) {
            cnt[x[0]-1950]++;
            cnt[x[1]-1950]--;
        }

        for(int i=1;i<101;i++)
            cnt[i] += cnt[i-1];

        return 1950 + max_element(cnt, cnt+101) - cnt;
    }
};