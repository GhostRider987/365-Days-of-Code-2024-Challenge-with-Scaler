int Solution::pow(int x, int n, int d) {
    if (n == 0)
        return 1 % d;

    long long result = 1;
    long long base = x;

    while (n > 0) {
        if (n % 2 == 1) {
            result = (result * base) % d;
        }
        base = (base * base) % d;
        n /= 2;
    }

    // Ensure non-negative result
    return (int)((result + d) % d);
}
