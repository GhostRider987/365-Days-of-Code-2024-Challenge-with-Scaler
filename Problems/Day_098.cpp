string Solution::convertToTitle(int A) {
    string result = "";
    
    while (A > 0) {
        // Convert the remainder of A divided by 26 to a character
        char ch = 'A' + (A - 1) % 26;
        // Append the character to the result
        result = ch + result;
        // Reduce A by (A - 1) / 26 to handle cases like 26, 52, 78, etc.
        A = (A - 1) / 26;
    }
    
    return result;
}
