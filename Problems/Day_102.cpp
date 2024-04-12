int Solution::solve(string A) {
    int M = 1e9+7;
    int vow=0, cons=0;
    int ans=0;
    for(int i=0;i<A.length();i++){
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u'){
            vow++;
            ans=(ans+cons)%M;
        }
        else{
            cons++;
            ans=(ans+vow)%M;
        }
    }
    return ans;
}
