int Solution::lengthOfLastWord(const string A) {
    int length = 0;
    int i = A.length() - 1;

    // Skip trailing spaces
    while (i >= 0 && A[i] == ' ') {
        i--;
    }

    // Count the characters of the last word
    while (i >= 0 && A[i] != ' ') {
        length++;
        i--;
    }

    return length;
}
