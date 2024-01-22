int Solution::solve(vector<int> &A, int B) {
    int n = A.size(), ans = 0;
    for(int i=0;i<B;i++){
        ans += A[i];
    }
    int left=B-1, right=n-1, temp = ans;
    while(left>=0 && right>=0){
        temp += A[right--];
        temp -= A[left--];
        ans = max(ans, temp);
    }
    return ans;
}
