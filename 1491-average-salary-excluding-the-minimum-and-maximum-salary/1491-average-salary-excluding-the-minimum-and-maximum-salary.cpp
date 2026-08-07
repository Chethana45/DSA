class Solution {
public:
    double average(vector<int>& salary) {
        int sum=0;
        int mx=salary[0];
        int mn=salary[0];
        for(int x:salary){
            sum+=x;
            mn=min(mn,x);
            mx=max(mx,x);
        }
        return (double)(sum-mx-mn)/(salary.size()-2);
    }
};