long Solution::solve(int A, int B) {
     int start = (A + 6) / 7 * 7;  // Equivalent to ceil(A/7) * 7
    
    // Find the largest integer less than or equal to B that is divisible by 7
    int end = B / 7 * 7;

    // Calculate the number of terms in the arithmetic series
    int num_terms = (end - start) / 7 + 1;

    // Calculate the sum of the arithmetic series
    int sum = num_terms * (start + end) / 2;

    return sum;
}
