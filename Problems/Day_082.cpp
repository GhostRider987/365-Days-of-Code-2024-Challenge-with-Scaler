vector<int> Solution::addArrays(vector<int> &A, vector<int> &B) {
    int m = A.size(), n = B.size();
    int maxSize = max(m, n);
    vector<int> result(maxSize + 1, 0);

    int carry = 0, i = m - 1, j = n - 1, k = maxSize;

    while (i >= 0 || j >= 0) {
        int sum = carry;
        if (i >= 0) sum += A[i--];
        if (j >= 0) sum += B[j--];

        result[k--] = sum % 10;
        carry = sum / 10;
    }

    if (carry > 0)
        result[k] = carry;
    else
        result.erase(result.begin());

    return result;
}
