class Solution {
public:
int gcd(int a ,int b){
    while(b!=0){
        int rem =a%b;
        a=b;
        b=rem;
    }
    return a;
}
    int gcdOfOddEvenSums(int n) {
        int evensum= n*n;
        int oddsum= n*(n+1);
        return gcd(evensum,oddsum);
    }
};