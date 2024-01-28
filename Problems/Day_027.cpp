int Solution::divide(int A, int B) {
 // Handle overflow cases
    if (A == INT_MIN && B == -1) {
        return INT_MAX;
    }

   // Determine the sign of the result
    int sign = (A < 0) ^ (B < 0) ? -1 : 1;

   // Take absolute values of A and B
    long long absA = abs(static_cast<long long>(A));
    long long absB = abs(static_cast<long long>(B));

    long long quotient = 0;

    // Perform bitwise division
    while (absA >= absB) {
        long long temp = absB, multiple = 1;
        while (absA >= (temp << 1)) {
            temp <<= 1;
            multiple <<= 1;
        }
        absA -= temp;
        quotient += multiple;
    }

    return static_cast<int>(sign * quotient);
}
