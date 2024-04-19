int Solution::solve(vector<int> &A, int B) {
    int ans = 0;
    int left = 0, right = A.size()-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        
        if(A[mid]>B) right=mid-1;
        else{
            ans = mid+1;
            left = mid+1;
        }
    }
    return ans;
}
