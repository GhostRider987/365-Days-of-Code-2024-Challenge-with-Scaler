vector<int> Solution::searchRange(const vector<int> &A, int B) {
    int n = A.size();
    int left = 0, right = n-1;
    int start = -1, end = -1;
    while(left<=right){
        int mid = left + (right-left)/2;
        
        if(A[mid] == B) {
            start = mid;
            right = mid - 1; // Update right to continue searching in the left half
        } else if(A[mid] < B) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    left = 0, right = n-1;
    while(left<=right){
        int mid = left + (right-left)/2;
        
       if(A[mid] == B) {
            end = mid;
            left = mid + 1; // Update left to continue searching in the right half
        } else if(A[mid] < B) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return {start,end};
}
