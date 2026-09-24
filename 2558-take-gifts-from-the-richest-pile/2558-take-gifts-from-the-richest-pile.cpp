class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;

        for(int x : gifts)
            pq.push(x);

        while(k--) {
            int x = pq.top();
            pq.pop();

            int remaining = sqrt(x);

            pq.push(remaining);
        }

        long long sum = 0;

        while(!pq.empty()) {
            sum += pq.top();
            pq.pop();
        }

        return sum;
    }
};