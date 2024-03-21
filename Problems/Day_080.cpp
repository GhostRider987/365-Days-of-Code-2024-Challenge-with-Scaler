int Solution::solve(int A) {
    long long sum = 0;
    int height = 0;

    // Loop until the sum exceeds or equals 
    while (sum <= A) {
        height++;
        sum += height;
    }

    // Return height - 1 since the loop exits after adding one extra height
    return height - 1;
}
