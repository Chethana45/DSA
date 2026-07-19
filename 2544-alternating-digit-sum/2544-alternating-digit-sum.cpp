class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int> digits;
        while(n>0){
        digits.push_back(n%10);
        n/=10;}
        reverse(digits.begin(),digits.end());
        int sum=0;
        for(int i=0;i<digits.size();i++){
            if(i%2==0)
            sum+=digits[i];
            else
            sum-=digits[i];
        }
        return sum;
    }
};