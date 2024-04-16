int Solution::solve(vector<int> &A, int B) {
    sort(A.begin(), A.end());
    if(B<0) B=-B;
    
    int i=0,j=1;
    while(j<A.size()){
        int d = A[j]-A[i];
        if(B==d && i!=j){
            return 1;
        }
        else if(d>B){
            i++;
        }
        else{
            j++;
        }
    }
    return 0;
}
