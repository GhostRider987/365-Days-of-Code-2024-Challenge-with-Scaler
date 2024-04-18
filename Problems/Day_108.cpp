int Solution::searchInsert(vector<int> &A, int B) {
   int n = A.size();
   int left = 0, right = n-1;
   int ans = n;
   while(left<=right){
       int mid = left + (right-left)/2;
       
       if(A[mid] >= B){
           ans = mid;
           right = mid-1;
       }
       else{
           left = mid+1;
       }
   }
   return ans;
}
