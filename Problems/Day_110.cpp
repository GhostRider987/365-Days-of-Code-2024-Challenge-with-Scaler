int Solution::sqrt(int A) {
    if(A==0 || A==1) return A;
    int left = 0;
    int right = A;
    int ans = 0;
    while(left <= right){
        int mid = left + (right-left)/2;
        if(mid<=A/mid){
            ans = mid;
            left = mid + 1;
        }
        else{
            right = mid -1;
        }
    }
    return ans;
}
