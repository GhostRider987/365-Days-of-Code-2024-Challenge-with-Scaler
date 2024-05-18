int Solution::maximumGap(const vector<int> &A) {
    int n = A.size();
    if (n < 2) return 0;

    int minElem = *min_element(A.begin(), A.end());
    int maxElem = *max_element(A.begin(), A.end());

    if (minElem == maxElem) return 0;

    int gap = max(1, (maxElem - minElem) / (n - 1));
    int bucketCount = (maxElem - minElem) / gap + 1;

    vector<int> minBucket(bucketCount, INT_MAX);
    vector<int> maxBucket(bucketCount, INT_MIN);

    for (int num : A) {
        int idx = (num - minElem) / gap;
        minBucket[idx] = min(minBucket[idx], num);
        maxBucket[idx] = max(maxBucket[idx], num);
    }

    int maxDiff = 0;
    int previousMax = minElem;

    for (int i = 0; i < bucketCount; ++i) {
        if (minBucket[i] == INT_MAX) continue;
        maxDiff = max(maxDiff, minBucket[i] - previousMax);
        previousMax = maxBucket[i];
    }

    return maxDiff;
}
