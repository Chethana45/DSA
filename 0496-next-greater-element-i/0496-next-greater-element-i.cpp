class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;

        for (int x : nums1) {

            int index = 0;

            // Find x in nums2
            while (nums2[index] != x) {
                index++;
            }

            // Search to the right
            int greater = -1;

            for (int i = index + 1; i < nums2.size(); i++) {

                if (nums2[i] > x) {
                    greater = nums2[i];
                    break;
                }
            }

            ans.push_back(greater);
        }

        return ans;
    }
};