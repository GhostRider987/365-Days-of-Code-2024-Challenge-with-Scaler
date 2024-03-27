int Solution::diffPossible(vector<int> &A, int B) {
    int left = 0;
    int right = 1;
    
    while (right < A.size()) {
        int diff = A[right] - A[left];
        
        if (diff == B && left != right) {
            return 1; // Found the difference B
        } else if (diff < B) {
            right++; // Move right pointer to increase the difference
        } else {
            left++; // Move left pointer to decrease the difference
        }
    }
    
    return 0; // Couldn't find the required difference
}
