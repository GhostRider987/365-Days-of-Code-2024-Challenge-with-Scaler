vector<int> Solution::solve(vector<int> &A) {
    int left = 0;
    int right = A.size() - 1;
    
    while(left < right){
        if(A[left] == 1 && A[right] == 0){
            A[left++] = 0;
            A[right--] = 1; 
        }
        else if(A[left] == 0){
            left++;
        }
        else if(A[right] == 1){
            right--;
        }
    }
    return A;
}
