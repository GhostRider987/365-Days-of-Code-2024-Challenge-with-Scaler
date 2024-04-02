int Solution::removeDuplicates(vector<int> &A) {
   int n = A.size();
   int len = -1, count = 0;
   
   for(int i=0; i<n; i++){
       if(len == -1 || A[len] != A[i]){
           count = 1;
           len++;
           A[len] = A[i];
       }
       else if(A[len] == A[i] && count<2){
           count++;
           len++;
           A[len] = A[i];
       }
   }
   return len+1;
}
