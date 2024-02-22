int Solution::solve(vector<int> &A) {
    int n = A.size();
    sort(A.begin(), A.end());
    return A[0]+A[n-1];
}
