int Solution::findMinXor(vector<int> &A) {
    int n = A.size();
    int ans = INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0; i<n-1; i++){
        ans = min(ans, A[i]^A[i+1]);
    }
    return ans;
}
