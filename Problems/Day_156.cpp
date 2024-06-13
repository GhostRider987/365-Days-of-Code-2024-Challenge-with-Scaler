string Solution::solve(string A) {
    // Array to store the frequency of each character
    int freq[26] = {0};

    // Count the frequency of each character in the string
    for (char c : A) {
        freq[c - 'a']++;
    }

    // Array to check if the character has already been added to the result
    bool added[26] = {0};

    // Create the resulting string with characters and their frequencies
    string result;
    for (char c : A) {
        if (!added[c - 'a']) {
            result += c + to_string(freq[c - 'a']);
            added[c - 'a'] = true;
        }
    }

    return result;
}
