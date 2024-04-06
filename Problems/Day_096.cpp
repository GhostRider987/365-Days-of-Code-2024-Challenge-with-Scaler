int Solution::solve(vector<int> &A, int B) {
    int i=0, j=0, ans=0;
    while(j<A.size()){
        B-=A[j];
        if(B<=0){
            while(B<=0) B+=A[i++];
        }
        ans += (j-i+1);
        j++;
    }
    return ans;
}
