int Solution::solve(int A) {
     // Digital root is the repeated sum of digits until there is only one digit left
    // We can achieve this by repeatedly summing the digits until we get a single digit
    while (A >= 10) {
        int sum = 0;
        // Extracting digits and summing them
        while (A > 0) {
            sum += A % 10;
            A /= 10;
        }
        A = sum; // Update A to the sum of digits
    }
    return A; // Return the single digit obtained
}
