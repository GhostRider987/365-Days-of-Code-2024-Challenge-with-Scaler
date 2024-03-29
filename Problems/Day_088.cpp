int Solution::removeElement(vector<int> &A, int B) {
    int num = -1;
    for(int i=0; i<A.size(); i++){
        if(A[i] != B){
            num++;
            A[num] = A[i];
        }
    }
    return num+1;
}
