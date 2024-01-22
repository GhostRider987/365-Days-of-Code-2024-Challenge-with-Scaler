vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    
    for(int i=1; i<A.size(); i++){
        if(i%2==0){
            if(A[i-1]>A[i]){
                swap(A[i-1],A[i]);
            }
        }
        else{
            if(A[i-1]<A[i]){
                swap(A[i-1],A[i]);
            }
        }
    }
    return A;
}
