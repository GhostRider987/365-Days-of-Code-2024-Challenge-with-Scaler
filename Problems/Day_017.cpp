vector<Interval> Solution::merge(vector<Interval> &A) {
    if (A.size() <= 1) {
        return A;
    }

    sort(A.begin(), A.end(), [](const Interval& a, const Interval& b) {
        return a.start < b.start;
    });

    vector<Interval> result;
    result.push_back(A[0]);

    // Iterate through the sorted intervals and merge overlapping ones.
    for (int i = 1; i < A.size(); ++i) {
        if (result.back().end >= A[i].start) {
            // Merge overlapping intervals.
            result.back().end = max(result.back().end, A[i].end);
        } else {
            // Add non-overlapping intervals to the result.
            result.push_back(A[i]);
        }
    }

    return result;
}
