vector<int> Solution::solve(vector<int> &A) {
     // Create a result vector to store the rearranged packets
    vector<int> result;

    // Iterate through the original array and add non-empty packets to the result
    for (int i : A) {
        if (i != 0) {
            result.push_back(i);
        }
    }

    // Add the empty packets (zeros) to the end of the result
    int emptyCount = A.size() - result.size();
    for (int i = 0; i < emptyCount; i++) {
        result.push_back(0);
    }

    return result;
}
