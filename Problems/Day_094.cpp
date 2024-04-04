vector<int> Solution::maxone(vector<int> &A, int B) {
    int n = A.size();
    int left = 0, right = 0;
    int maxOnes = 0, zeroCount = 0;
    int startIdx = 0, endIdx = 0;
    
    while (right < n) {
        if (A[right] == 0) {
            zeroCount++;
        }

        while (zeroCount > B) {
            if (A[left] == 0) {
                zeroCount--;
            }
            left++;
        }

        if (right - left + 1 > maxOnes) {
            maxOnes = right - left + 1;
            startIdx = left;
            endIdx = right;
        }
        
        right++;
    }
    
    vector<int> result;
    for (int i = startIdx; i <= endIdx; ++i) {
        result.push_back(i);
    }
    return result;
}
