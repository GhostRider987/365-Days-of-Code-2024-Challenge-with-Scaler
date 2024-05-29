vector<int> Solution::rotateArray(vector<int> &A, int B) {
	int n = A.size();
    B = B % n;  // Normalize B
    vector<int> ret;

    for (int i = 0; i < n; i++) {
        ret.push_back(A[(i + B) % n]);
    }

    return ret; 
}
