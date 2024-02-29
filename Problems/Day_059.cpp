vector<vector<int> > Solution::solve(vector<vector<int> > &A) {
     int N = A.size();

    // Traverse upper triangle of the matrix
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            // Swap elements symmetrically across the main diagonal
            swap(A[i][j], A[j][i]);
        }
    }

    return A;
}
