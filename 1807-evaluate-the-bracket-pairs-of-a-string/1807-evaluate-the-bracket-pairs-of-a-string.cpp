class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {

        unordered_map<string, string> mp;

        // Store key -> value
        for(auto x : knowledge) {
            mp[x[0]] = x[1];
        }

        string ans = "";

        for(int i = 0; i < s.length(); i++) {

            if(s[i] == '(') {

                string key = "";

                i++;

                while(s[i] != ')') {
                    key += s[i];
                    i++;
                }

                if(mp.find(key) != mp.end())
                    ans += mp[key];
                else
                    ans += "?";
            }
            else {
                ans += s[i];
            }
        }

        return ans;
    }
};