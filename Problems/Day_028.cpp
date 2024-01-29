int Solution::isPrime(int A) {
   // Check if A is less than 2, it is not a prime number
    if (A < 2) {
        return 0;
    }

    // Check for divisibility from 2 to the square root of A
    for (int i = 2; i <= sqrt(A); i++) {
        if (A % i == 0) {
            return 0; // A is divisible by i, so it's not a prime number
        }
    }

    return 1; // A is prime 
}
