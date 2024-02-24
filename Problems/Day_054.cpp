int Solution::isPalindrome(string A) {
    int start = 0;
    int end = A.length() - 1;

    while (start < end) {
        // Ignore non-alphanumeric characters and convert to lowercase
        while (start < end && !isalnum(A[start])) {
            start++;
        }
        while (start < end && !isalnum(A[end])) {
            end--;
        }

        // Compare characters after ignoring case
        if (tolower(A[start]) != tolower(A[end])) {
            return 0; // Not a palindrome
        }

        start++;
        end--;
    }

    return 1; // Palindrome
}
