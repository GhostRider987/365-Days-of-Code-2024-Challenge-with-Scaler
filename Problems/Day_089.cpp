void Solution::merge(vector<int> &A, vector<int> &B) {
    int m = A.size(), n = B.size();
    int i = m-1, j = n-1;
    int k = m+n-1;
    
    A.resize(m+n);
    while(j>=0){
        if(i>=0 && A[i]>B[j]){
            A[k--] = A[i--];
        }
        else{
            A[k--] = B[j--];
        }
    }
}
