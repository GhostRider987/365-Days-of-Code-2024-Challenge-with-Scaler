int Solution::solve(vector<int> &A, int B) {
    int ans = 0;
    int i=0, j=0;
    while(j<A.size()){
        if(A[j]==0) B--;
        while(B<0){
            if(A[i]==0) B++;
            i++;
        }
        ans = max(ans,j-i+1);
        j++;
    }
    return ans;
}
