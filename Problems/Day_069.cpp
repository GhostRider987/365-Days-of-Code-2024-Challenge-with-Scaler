int Solution::solve(vector<int> &A, int B, int C) {
    int fine = 0;
    
    for (int i = 0; i < A.size(); ++i) {
        if (A[i] % 2 != B % 2) {
            // Last digit of the registration number does not match with the rule
            fine += C;
        }
    }

    return fine;
}
