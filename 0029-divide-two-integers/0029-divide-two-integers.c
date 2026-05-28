int divide(int dividend, int divisor) {

    if(dividend == -2147483648 && divisor == -1)
        return 2147483647;

    long long a = llabs((long long)dividend);
    long long b = llabs((long long)divisor);

    int sign = 1;

    if((dividend < 0 && divisor > 0) ||
       (dividend > 0 && divisor < 0))
        sign = -1;

    long long result = 0;

    while(a >= b) {

        long long temp = b;
        long long multiple = 1;

        while(a >= (temp << 1)) {
            temp = temp << 1;
            multiple = multiple << 1;
        }

        a = a - temp;
        result = result + multiple;
    }

    return sign * result;
}