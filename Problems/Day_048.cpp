int Solution::solve(vector<int> &A) {
    int n = A.size();
    int sum = 0;
    vector<int>suff(n);
    for(int i=n-1;i>=0;i--){
        if(i == n-1)
            suff[i] = A[i];
        else
            suff[i] = max(suff[i+1], A[i]);
    }
    set<int>small;
    small.insert(A[0]);
    for(int i=1;i<n;i++){
        small.insert(A[i]);
        auto it = small.find(A[i]);
        if(it != small.begin() && suff[i] != A[i]){
            sum = max(sum, (*--it) + A[i] + suff[i+1]);   
        }
    }
    return sum;
}
