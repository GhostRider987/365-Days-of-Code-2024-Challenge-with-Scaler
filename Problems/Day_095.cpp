int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i=0, j=0, k=0;
    int ans = INT_MAX;
    while(i<A.size() && j<B.size() && k<C.size()){
        int mini = min({A[i],B[j],C[k]});
        int diff = max({A[i],B[j],C[k]}) - mini;
        
        ans = min(ans, diff);
        
        if(mini == A[i]){
            i++;
        }
        else if(mini == B[j]){
            j++;
        }
        else{
            k++;
        }
    }
    return ans;
}
