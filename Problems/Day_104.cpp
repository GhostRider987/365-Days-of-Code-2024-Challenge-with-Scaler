vector<int> Solution::findPerm(const string A, int B) {
    vector<int> result(B);
    int small = 1, large = B;
    for (int i = 0; i < B; ++i) {
        if (A[i] == 'I') {
            result[i] = small++;
        } else {
            result[i] = large--;
        }
    }
    result[B - 1] = small; 
    return result;
}
