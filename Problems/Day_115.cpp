const int MOD = 1e9 + 7;
vector<int> Solution::solve(vector<int> &A) {
    int n = A.size();
    vector<int> result(n, 1);
    
    long long prefixProduct = 1;
    for (int i = 0; i < n; ++i) {
        result[i] = (prefixProduct % MOD);
        prefixProduct = (prefixProduct * A[i]) % MOD;
    }
    
    long long suffixProduct = 1;
    for (int i = n - 1; i >= 0; --i) {
        result[i] = (result[i] * suffixProduct) % MOD;
        suffixProduct = (suffixProduct * A[i]) % MOD;
    }
    
    return result;
}
