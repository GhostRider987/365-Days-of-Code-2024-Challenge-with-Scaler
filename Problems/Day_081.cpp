int Solution::solve(vector<int> &A) {
    sort(A.begin(), A.end());

    int pairs = 0;
    int count = 1; // Initialize count for the first color

    // Iterate through the sorted array
    for (int i = 1; i < A.size(); i++) {
        if (A[i] == A[i - 1]) {
            // Increment count if the current color is the same as the previous one
            count++;
        } else {
            // Calculate pairs for the previous color and update count for the current color
            pairs += count / 2;
            count = 1;
        }
    }

    // Calculate pairs for the last color
    pairs += count / 2;

    return pairs;
}
