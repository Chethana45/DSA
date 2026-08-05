class Solution {
public:

    void dfs(int node, vector<vector<int>>& adj, vector<int>& sus) {

        sus[node] = 1;

        for(int next : adj[node]) {
            if(!sus[next]) {
                dfs(next, adj, sus);
            }
        }
    }

    vector<int> remainingMethods(int n, int k,
                                 vector<vector<int>>& invocations) {

        vector<vector<int>> adj(n);

        for(auto &x : invocations) {
            adj[x[0]].push_back(x[1]);
        }

        vector<int> sus(n, 0);

        // Find all suspicious methods
        dfs(k, adj, sus);

        // Check normal -> suspicious
        for(auto &x : invocations) {

            int a = x[0];
            int b = x[1];

            if(!sus[a] && sus[b]) {

                vector<int> ans;

                for(int i = 0; i < n; i++)
                    ans.push_back(i);

                return ans;
            }
        }

        // Return only non-suspicious methods
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            if(!sus[i])
                ans.push_back(i);
        }

        return ans;
    }
};