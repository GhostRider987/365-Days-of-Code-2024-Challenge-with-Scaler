int Solution::maxArea(vector<int> &A) {
    int i=0, j=A.size()-1;
    int ans = 0;
    while(i<j){
        int mini = min(A[i], A[j]);
        ans = max(ans, mini * (j-i));
        if(A[i] == mini){
            i++;
        }
        else{
            j--;
        }
    }
    return ans;
}
