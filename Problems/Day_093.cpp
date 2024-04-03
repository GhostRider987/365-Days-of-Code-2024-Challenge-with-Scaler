bool isPalindrome(int num) {
    int reversed = 0;
    int original = num;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return original == reversed;
}

int Solution::solve(int A, int B, int C) {
    int count = 0;
    vector<int> palindromes;

    // Find all palindromic integers in the range [A, B]
    for (int i = A; i <= B; ++i) {
        if (isPalindrome(i))
            palindromes.push_back(i);
    }

    // Use two pointers to find the maximum number of distinct palindromic integers
    int left = 0, right = 0;
    while (left < palindromes.size()) {
        while (right < palindromes.size() && palindromes[right] - palindromes[left] <= C) {
            ++right;
        }
        count = max(count, right - left);
        ++left;
    }

    return count;
}
