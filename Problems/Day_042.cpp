int Solution::divisibleBy60(vector<int> &A) {
    int n = A.size();

    // Special case: If there's only one digit and it's 0, return 1
    if (n == 1 && A[0] == 0) {
        return 1;
    }

    // Calculate the sum of digits
    int sum = 0;
    int zeroCount = 0;
    int evenCount = 0;

    for (int digit : A) {
        sum += digit;

        if (digit == 0) {
            zeroCount++;
        }

        if (digit % 2 == 0) {
            evenCount++;
        }
    }

    // Check if the sum is divisible by 3 and there is at least one '0' and one even digit
    if (sum % 3 == 0 && zeroCount > 0 && evenCount > 1) {
        return 1;
    }

    return 0;
}
