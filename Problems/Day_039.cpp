int Solution::addNumbers(int A, int B) {
     while (B != 0) {
        // Calculate the carry
        int carry = A & B;

        // XOR to get the sum without carry
        A = A ^ B;

        // Shift the carry by one position to the left
        B = carry << 1;
    }

    return A;
}
