int Solution::solve(string A) {
     unordered_map<char, int> charFrequency;

    // Count the frequency of each character
    for (char c : A) {
        charFrequency[c]++;
    }

    // Count the number of characters with odd frequency
    int oddCount = 0;
    for (auto it : charFrequency) {
        if (it.second % 2 != 0) {
            oddCount++;
        }
    }

    // Check if the string can be rearranged to form a palindrome
    if ((A.length() % 2 == 0 && oddCount == 0) || (A.length() % 2 == 1 && oddCount == 1)) {
        return 1; // String can be rearranged to form a palindrome
    } else {
        return 0; // String cannot be rearranged to form a palindrome
    }
}
