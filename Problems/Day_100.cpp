string Solution::longestCommonPrefix(vector<string> &A) {
    if (A.empty()) return "";

    string prefix = A[0]; // Assume the first string as the initial prefix

    for (int i = 1; i < A.size(); ++i) {
        int j = 0;
        while (j < prefix.length() && j < A[i].length() && prefix[j] == A[i][j]) {
            j++;
        }
        prefix = prefix.substr(0, j); // Update prefix to the common substring
    }

    return prefix;
}
