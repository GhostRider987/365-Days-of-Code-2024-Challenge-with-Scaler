int Solution::solve(int A, int B) {
    int topleft = min(A-1, B-1);
    int topright = min(A-1, 8-B);
    int bottomleft = min(8-A, B-1);
    int bottomright = min(8-A, 8-B);
    int ans = topleft + topright + bottomleft + bottomright;
    return ans;
}
