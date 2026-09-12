class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        
        for(int x : arr)
            m[x]++;
        
        set<int> s;
        
        for(auto x : m) {
            if(s.count(x.second))
                return false;
            s.insert(x.second);
        }
        
        return true;
    }
};