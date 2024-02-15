int Solution::solve(string A, string B) {
    int a = A.back() - '0'; // last digit of A
    long long b = 0;

    // Convert the last 9 digits of B to an integer
    for (int i = B.size() - 9; i < B.size(); i++) {
        b = b * 10 + (B[i] - '0');
    }

    // B % 4 to reduce the power of B to at most 4
    b %= 4;
    
    if (b == 0) {
        // If B % 4 is zero, set it to 4 to handle the case properly
        b = 4;
    }

    // Calculate a^b % 10
    int result = 1;
    for (int i = 0; i < b; i++) {
        result = (result * a) % 10;
    }

    return result;
}
