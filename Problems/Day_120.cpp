int Solution::solve(vector<int> &A, vector<int> &B, vector<int> &C) {
     int minDiff = INT_MAX;
    int i = 0, j = 0, k = 0;

    while (i < A.size() && j < B.size() && k < C.size()) {
        int minVal = min(A[i], min(B[j], C[k]));
        int maxVal = max(A[i], max(B[j], C[k]));
        minDiff = min(minDiff, maxVal - minVal);

        if (minVal == A[i])
            i++;
        else if (minVal == B[j])
            j++;
        else
            k++;
    }

    return minDiff;
}
