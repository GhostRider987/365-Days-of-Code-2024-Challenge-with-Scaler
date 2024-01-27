int Solution::solve(int A, int B, int C) {
    int bitB = (A >> (B - 1)) & 1;
    int bitC = (A >> (C - 1)) & 1;

    
    if (bitB != bitC) {
        A ^= (1 << (B - 1)) | (1 << (C - 1));
    }

    return A;
}
