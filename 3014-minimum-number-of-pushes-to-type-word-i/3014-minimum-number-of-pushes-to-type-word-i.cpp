class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        int n= word.length();
        for(int i=0;i<n;i++){
            ans+=(i/8)+1;
        }
        return ans;
    }
};