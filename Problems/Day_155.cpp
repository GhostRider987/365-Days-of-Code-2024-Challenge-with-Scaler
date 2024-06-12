int Solution::solve(string A) {
    int i=0;
    int j=A.size()-1;
    int k,l;
    while(i<j){
        if(A[i]==A[j]){
            k=i;
            l=j;
            while(k<l && A[k]==A[l]){
                k++;
                l--;
            }
            if(k>=l)
                return i;
            i = k;
        }
        else
            i++;
    }
}
