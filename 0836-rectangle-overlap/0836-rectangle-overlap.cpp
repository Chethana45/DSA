class Solution {
public:
    bool isRectangleOverlap(vector<int>& a, vector<int>& b) {
        return max(a[0],b[0]) < min(a[2],b[2]) &&
               max(a[1],b[1]) < min(a[3],b[3]);
    }
};