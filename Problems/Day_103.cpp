int Solution::cntBits(vector<int> &A) {
    int n = A.size();
    long long int ans = 0;
    for(int i=0; i<31; i++){
        int count = 0;
        for(int j=0; j<n; j++){
            if(A[j]&1) count++;
            A[j]>>=1;
        }
        ans += count*((long long)n - count)*2;
    }
    return ans%1000000007;
}
