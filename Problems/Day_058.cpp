int Solution::solve(vector<int> &A) {
    int n = A.size();
    if (n == 0) {
        return 0;
    }

    int count = 1; 
    int maxSoFar = A[0]; 

    for (int i = 1; i < n; ++i) {
        if (A[i] > maxSoFar) {
            count++;
            maxSoFar = A[i];
        }
    }
    return count;
}
