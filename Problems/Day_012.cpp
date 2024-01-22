vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int>> ans;
    //Iterate upper triangle column  
    int n = A.size();
    for(int i=0; i<n; i++){
        vector<int> result;
        int col=i,row=0;
        while(col>=0){
            result.push_back(A[row][col]);
            row++;
            col--;
        }
        ans.push_back(result);
    }
    
    //Iterate lower triangle row
    for(int i=1; i<n; i++){
        vector<int> result;
        int row=i,col=n-1;
        while(row<n){
            result.push_back(A[row][col]);
            row++;
            col--;
        }
        ans.push_back(result);
    }
    return ans;
}
