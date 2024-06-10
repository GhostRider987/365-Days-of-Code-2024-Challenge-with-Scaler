bool isPalindrome(const string& s) {
    int n = s.length();
    for (int i = 0; i < n / 2; ++i) {
        if (s[i] != s[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int Solution::solve(string A) {
    int c = 0;
    int n = A.length();
    string s = "";
    
    for (int i = 0; i < n; ++i) {
        if (A[i] == ' ') {
            if (!s.empty() && isPalindrome(s)) {
                ++c;
            }
            s = "";
        } else {
            s += A[i];
        }
    }
    
    // Check the last word
    if (!s.empty() && isPalindrome(s)) {
        ++c;
    }
    
    return c;
}
