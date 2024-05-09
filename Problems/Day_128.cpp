int Solution::solve(vector<int> &A) {
    int ans = 0;
    for(int i=0; i<A.size(); i++){
        int conti = (i+1)*(A.size()-i);
        if(conti % 2){
            ans = ans^A[i];
        }
    }
    return ans;
}
