string Solution::solve(string A, int B) {
    string res = "";
    for(int i=0; i<A.size(); i++){
        int j=i;
        string temp = "";
        while(A.size() && A[i] == A[j]){
            temp += A[i];
            j++;
        }
        if(j-i != B){
            res += temp;
        }
        i = j-1;
    }
    return res;
}
