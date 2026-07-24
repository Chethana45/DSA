class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right= height.size()-1;
        int maxi=0;
        while(left<right){
            int width=right-left;
            int heigh=min(height[right],height[left]);
            int area= width*heigh;
            maxi=max(area,maxi);
            if(height[left]<height[right])
            left++;
            else
            right--;
            
        }
        return maxi;
    }
};