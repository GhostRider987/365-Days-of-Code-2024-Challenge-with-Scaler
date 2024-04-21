int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    int n = A.size(), m = A[0].size();
    int left = 0, right = (n-1)*m + m-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        int row = mid/m, col = mid%m;
        
        if(A[row][col] == B) return 1;
        if(A[row][col] > B){
            right = mid-1;
        } 
        else{
            left = mid+1;
        }
    }
    return 0;
}
