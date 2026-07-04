class Solution {
public:

    double power(double x, long long n) {

        // Base Case
        if (n == 0)
            return 1;

        // Recursive Call
        double half = power(x, n / 2);

        // If n is even
        if (n % 2 == 0)
            return half * half;

        // If n is odd
        return x * half * half;
    }

    double myPow(double x, int n) {

        long long N = n;

        // Handle negative exponent
        if (N < 0) {
            N = -N;
            return 1.0 / power(x, N);
        }

        return power(x, N);
    }
};