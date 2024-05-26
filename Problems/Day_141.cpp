int Solution::solve(vector<int> &A) {
    int low = 0;
    int high = A.size() - 1;
    int n = A.size();

    while (low <= high) 
    {
        int mid = low + (high - low) / 2;

        // Compare middle element with its neighbours (if neighbours exist)
        if ((mid == 0 || A[mid - 1] <= A[mid]) && 
            (mid == n - 1 || A[mid + 1] <= A[mid]))
            return A[mid];

        // If middle element is not peak and its left neighbour is greater
        // than it, then left half must have a peak element
        else if (mid > 0 && A[mid - 1] > A[mid])
            high = mid - 1;

        // If middle element is not peak and its right neighbour is greater
        // than it, then right half must have a peak element
        else
            low = mid + 1;
    }

    return -1; // This line will never be reached, just for safety.
}
