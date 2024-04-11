string Solution::countAndSay(int A) {
    if (A == 1) return "1";

    string prev = "1";
    for (int i = 2; i <= A; ++i) {
        string curr = "";
        int count = 1;
        char digit = prev[0];
        for (int j = 1; j < prev.size(); ++j) {
            if (prev[j] == digit) {
                count++;
            } else {
                curr += to_string(count) + digit;
                count = 1;
                digit = prev[j];
            }
        }
        curr += to_string(count) + digit;
        prev = curr;
    }
    return prev;
}
