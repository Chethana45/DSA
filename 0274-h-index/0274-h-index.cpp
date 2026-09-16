class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.rbegin(), c.rend());
        int h=0;
        while(h<c.size() && c[h]>h) h++;
        return h;
    }
};