int Solution::repeatedNumber(const vector<int> &A){
    int n = size(A);
    vector<int> freq(n,0);
    for(int i=0; i<n; i++){
        freq[A[i]]+=1;
        if(freq[A[i]]==2){
            return A[i];
        }
    }
    return -1;
}
