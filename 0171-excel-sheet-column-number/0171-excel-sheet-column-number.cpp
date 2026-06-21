class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long result =0;
        for(char ch : columnTitle){
            result = result*26+ (ch-'A'+1);
        }
        return result;
    }
};