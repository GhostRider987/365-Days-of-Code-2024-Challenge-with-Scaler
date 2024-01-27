int Solution::solve(int A) {
    // Find the number of bits needed to represent A without leading zeros
    int numBits = 0;
    int tempA = A;
    
    while(tempA > 0){
        tempA >>= 1;
        numBits++;
    }

    // Create a mask with all bits set to 1 up to the significant bit
    int mask = (1 << numBits) - 1;

    // Flip all bits using XOR with the mask
    int ans = A ^ mask;
    return ans;
}
