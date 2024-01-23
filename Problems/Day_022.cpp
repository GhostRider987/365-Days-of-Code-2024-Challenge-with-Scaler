unsigned int Solution::reverse(unsigned int A) {
    unsigned int result = 0;
     // Check the ith bit in A, and set the corresponding bit in result
    for (int i = 0; i < 32; ++i) {
        if (A & (1 << i)) {
            result |= (1 << (31 - i));
        }
    }

    return result;
}
