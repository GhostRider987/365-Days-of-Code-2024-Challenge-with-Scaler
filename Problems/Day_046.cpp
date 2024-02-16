int Solution::isPrime(int A) {
    if (A <= 1) {
        return 0;  // 1 is not a prime number
    }
    int upperLimit = (int)(sqrt(A));
    for (int i = 2; i <= upperLimit; i++) {
        if (A % i == 0) {
            return 0;  // A is divisible by i, so not a prime number
        }
    }
    return 1;  // A is a prime number
}
