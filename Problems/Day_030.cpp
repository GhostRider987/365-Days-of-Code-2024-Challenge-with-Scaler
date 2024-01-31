vector<int> Solution::sieve(int A) {
  // Initialize a boolean array to mark whether each number is prime or not
  vector<bool> isPrime(A + 1, true);

     // Iterate from 2 to sqrt(A) to mark multiples as not prime
    for (int i = 2; i * i <= A; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= A; j += i) {
                isPrime[j] = false;
            }
        }
    }

    // Collect the prime numbers into a vector
    vector<int> primes;
    for (int i = 2; i <= A; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
        }
    }

    return primes;
}
