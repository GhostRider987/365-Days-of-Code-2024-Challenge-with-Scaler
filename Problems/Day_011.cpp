vector<int> Solution::getRow(int A) {
     if (A == 0) {
        return {1};
    }
    vector<int> prevRow = getRow(A - 1);
    vector<int> result = {1};

    for (int i = 1; i < A; ++i) {
        result.push_back(prevRow[i - 1] + prevRow[i]);
    }

    result.push_back(1);
    return result;
}
