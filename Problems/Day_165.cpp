#include <numeric>
int Solution::solve(vector<int> &A, int B) {
    int min = *max_element(A.begin(), A.end());
    int max = accumulate(A.begin(), A.end(), 0);
       
    if (B == A.size()) return min;
    if (A.empty() || B == 0) return 0;
       
    int ans = 0;
    while (max > min) {
        int mid = (max + min) / 2;
        int sum = 0, count = 1;
        for (int i = 0; i < A.size(); i++) {
            if (sum + A[i] > mid) {
                sum = 0;
                count++;
            }
            sum += A[i];
        }
        if (count > B) {
            min = mid + 1;
        } else {
            max = mid;
        }
    }
    return min;
}
