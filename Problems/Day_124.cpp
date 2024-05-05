void reverse(vector<int> &v){
    int n = v.size();
    int i=0, j=n-1;
    while(i<j){
        swap(v[i],v[j]);
        i++, j--;
    }
}

void Solution::rotate(vector<vector<int> > &A) {
   int n = A.size();
   
   //transpose of matrix
   for(int i=0; i<n; i++){
       for(int j=0; j<i; j++){
           swap(A[i][j], A[j][i]);
       }
   }
   
   //reverse every row
   for(int i=0; i<n; i++){
      reverse(A[i]);
   }
}
