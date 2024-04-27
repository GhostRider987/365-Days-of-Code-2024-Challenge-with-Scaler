int Solution::search(const vector<int> &A, int B) {
    int n = A.size();
    int l = 0, r = n-1;
    while(l <= r){
        int mid = (l + r)/ 2;
        if(A[mid] == B) return mid;
        if( A[l] < A[r] ){
            if( B < A[mid] )r = mid-1;
            else l = mid+1;
        }
        else{
            if( A[l] < A[mid] ){
                if( B >= A[l] && B < A[mid] )r = mid-1;
                else l = mid+1;
            }
            else{
                if( A[mid] < B && B <= A[r] )l = mid+1;
                else r = mid-1;
            }
        }
    }
    return -1;
}
