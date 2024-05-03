int Solution::solve(vector<vector<int> > &A, int B) {
    if (A.empty()) return 0;
    
    vector<vector<int>> ans(A.size());
    
    for(int i = 0; i < A.size(); i++){
        int l = 0, sum = 0;
        for(int j = 0; j < A.size(); j++){
            sum += A[i][j];
            if(j - l + 1 == B){
                ans[i].push_back(sum);
                sum -= A[i][l];
                l++;            
            }
        }
    }
    
    int ansa = INT_MIN;
    for(int i = 0; i < ans[0].size(); i++){
        int l = 0, sum = 0;
        for(int j = 0; j < ans.size(); j++){
            sum += ans[j][i];
            if(j - l + 1 == B){
                ansa = max(ansa, sum);
                sum -= ans[l][i];
                l++;
            }
        }
    }
    
    return ansa;
}
