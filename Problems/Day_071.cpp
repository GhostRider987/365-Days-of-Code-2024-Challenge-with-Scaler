int Solution::solve(int A) {
    int num = A;
    int n = 0; // Number of digits
    int sum = 0;

    // Count the number of digits
    while (num > 0) {
        num /= 10;
        n++;
    }

    num = A; // Reset num to the original value

    // Calculate the sum of digits raised to the power of the number of digits
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, n);
        num /= 10;
    }

    return (sum == A) ? 1 : 0;
}
