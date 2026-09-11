class Solution {
public:
    unordered_map<string, vector<pair<string, double>>> graph;

    double dfs(string cur, string target,
               unordered_set<string>& visited) {

        if (cur == target)
            return 1.0;

        visited.insert(cur);

        for (auto [next, value] : graph[cur]) {

            if (visited.count(next))
                continue;

            double result = dfs(next, target, visited);

            if (result != -1.0)
                return value * result;
        }

        return -1.0;
    }

    vector<double> calcEquation(
        vector<vector<string>>& equations,
        vector<double>& values,
        vector<vector<string>>& queries) {

        // Build graph
        for (int i = 0; i < equations.size(); i++) {

            string a = equations[i][0];
            string b = equations[i][1];
            double value = values[i];

            graph[a].push_back({b, value});
            graph[b].push_back({a, 1.0 / value});
        }

        vector<double> ans;

        for (auto& query : queries) {

            string a = query[0];
            string b = query[1];

            if (!graph.count(a) || !graph.count(b)) {
                ans.push_back(-1.0);
                continue;
            }

            unordered_set<string> visited;

            ans.push_back(dfs(a, b, visited));
        }

        return ans;
    }
};