int Solution::solve(int A, int B, int C) {
    // Extract the Bth and Cth bits
    int bitB = (A >> (B - 1)) & 1;
    int bitC = (A >> (C - 1)) & 1;

    // XOR to swap the bits if they are different
    if (bitB != bitC) {
        A ^= (1 << (B - 1)) | (1 << (C - 1));
    }

    return A;
}
