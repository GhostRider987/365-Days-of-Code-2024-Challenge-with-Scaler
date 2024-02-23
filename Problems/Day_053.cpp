int Solution::romanToInt(string A) {
    unordered_map<char, int> romanMap = {
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000}
    };

    int result = 0;
    int n = A.length();

    for (int i = 0; i < n; i++) {
        // If current numeral is smaller than the next numeral, subtract its value
        if (i < n - 1 && romanMap[A[i]] < romanMap[A[i + 1]]) {
            result -= romanMap[A[i]];
        } else {
            // Otherwise, add its value
            result += romanMap[A[i]];
        }
    }

    return result;
}
