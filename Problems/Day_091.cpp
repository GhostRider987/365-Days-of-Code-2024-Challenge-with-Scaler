int Solution::removeDuplicates(vector<int> &A) {
   int len = -1, n = A.size();
   for(int i=0; i<n; i++){
       if(len == -1 || A[len] != A[i]){
           len++;
           A[len] = A[i];
       }
   }
   return len+1;
}
