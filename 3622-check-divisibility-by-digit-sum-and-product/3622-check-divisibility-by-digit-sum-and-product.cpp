class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;

        int x = n;

        while (x != 0) {
            int digit = x % 10;

            sum += digit;
            product *= digit;

            x /= 10;
        }

        return n % (sum + product) == 0;
    }
};