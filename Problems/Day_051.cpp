vector<int> Solution::repeatedNumber(const vector<int> &A) {
    int n = A.size();
    long long sum = 0;
    long long sq = 0;
    long long nsum = 0;
    long long nsq = 0;

    for (int i = 0; i < n; i++) {
        long long temp = static_cast<long long>(A[i]);
        sum += temp;
        sq += temp * temp;

        long long ac = i + 1LL;
        nsum += ac;
        nsq += ac * ac;
    }

    sum = nsum - sum;
    sq = nsq - sq;
    sq /= sum;
    long long b = (sum + sq) / 2;
    long long a = sq - b;

    vector<int> ans;
    ans.push_back(static_cast<int>(a));
    ans.push_back(static_cast<int>(b));

    return ans;
}
