class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for(int x=0;x<nums.size();x++){
            int leftsum=0;
            int rightsum=0;
            for(int i=0;i<x;i++){
                leftsum+=nums[i];
            }
            for(int i=x+1;i<nums.size();i++){
                rightsum+=nums[i];
            }
            if(leftsum==rightsum)
            return x;
        }
        return -1;
    }
};