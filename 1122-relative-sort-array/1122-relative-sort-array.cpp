class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> ans;
        vector<int> freq(1001, 0);

        // Count elements in arr1
        for(int x : arr1) {
            freq[x]++;
        }

        // Add elements according to arr2
        for(int x : arr2) {
            while(freq[x] > 0) {
                ans.push_back(x);
                freq[x]--;
            }
        }

        // Add remaining elements in ascending order
        for(int i = 0; i <= 1000; i++) {
            while(freq[i] > 0) {
                ans.push_back(i);
                freq[i]--;
            }
        }

        return ans;
    }
};