int Solution::strStr(const string A, const string B) {
    int k=0;
    if(A.size() < B.size() || A.size() == 0 || B.size() == 0){
        return -1;
    }
    
    for(int i=0; i<A.size(); i++){
        if(A[i] == B[k]){
            k++;
        }
        else if(k>0){
            i = i-k;
            k = 0;
        }
        else{
            k = 0;
        }
        if(k == B.size()){
            return i-B.size()+1;
        }
    }
    return -1;
}
