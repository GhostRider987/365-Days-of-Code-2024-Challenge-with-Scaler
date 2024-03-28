void Solution::sortColors(vector<int> &A) {
    int l = 0, r = A.size() - 1;
    int i = 0;
    
    while(i <= r){
        if(A[i] == 0){
            swap(A[i], A[l]);
            l++;
            i++;
        }
        else if(A[i] == 2){
            swap(A[i], A[r]);
            r--;
        }
        else{
            i++;
        }
    }
}
