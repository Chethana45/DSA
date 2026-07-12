class Solution {
public:
vector<int> current;
vector<vector<int>> ans;
void solve(int start,int n,int k){
    if(current.size()==k){
        ans.push_back(current);
        return;
    }
    for(int i=start;i<=n;i++){
        current.push_back(i);
        solve(i+1,n,k);
        current.pop_back();
    }
}
    vector<vector<int>> combine(int n, int k) {
        solve(1,n,k);
        return ans;
        
    }
};