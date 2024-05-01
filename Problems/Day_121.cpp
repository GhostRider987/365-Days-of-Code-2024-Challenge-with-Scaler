vector<int> Solution::subUnsort(vector<int> &A) {
    int n = A.size();
    int start = -1, end = -1;
    for(int i=0; i<n-1; i++){
        if(A[i]>A[i+1]){
            start = i;
            break;
        }
    }
    
    for(int i=n-1; i>0; i--){
        if(A[i-1]>A[i]){
            end = i;
            break;
        }
    }
    
    vector<int> ans;
    if(start == -1){
        ans.push_back(start);
        return ans;
    }
    int maxval = INT_MIN, minval = INT_MAX;
    for(int i=start; i<=end; i++){
        minval = min(minval, A[i]);
        maxval = max(maxval, A[i]);
    }
    
    for(int i=0; i<=start; i++){
        if(A[i]>minval){
            start = i;
            break;
        }
    }
    
    for(int i=n-1; i>=end+1; i--){
        if(A[i]<maxval){
            end = i;
            break;
        }
    }
    
    ans.push_back(start);
    ans.push_back(end);
    return ans;
}
