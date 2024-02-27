int countIntegersGreaterThanC(const vector<int>& A, int C) {
    int count = 0;
    for (int num : A) {
        if (num > C) {
            count++;
        }
    }
    return count;
}

int countIntegersLessThanC(const vector<int>& B, int C) {
    int count = 0;
    for (int num : B) {
        if (num < C) {
            count++;
        }
    }
    return count;
}

int Solution::solve(vector<int> &A, vector<int> &B, int C) {
    int countA = countIntegersGreaterThanC(A, C);
    int countB = countIntegersLessThanC(B, C);
    return max(countA, countB);
}
