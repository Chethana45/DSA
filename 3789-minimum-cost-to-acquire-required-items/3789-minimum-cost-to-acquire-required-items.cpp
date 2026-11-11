class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long common= min(need1,need2);
        long long answer= common*min(costBoth,cost1+cost2);
        if(need1>need2){
            answer+=(need1-need2)*1LL*min(costBoth,cost1);
        }
        else{
            answer+=(need2-need1)*1LL*min(costBoth,cost2); 
        }
        return answer;
    }
};