class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1)
        return false;
        int sum=1;
        for(int i=2;i<num;i++){
            if(num%i==0){
                sum+=i;

            }
        }
        return sum==num;
    }
};