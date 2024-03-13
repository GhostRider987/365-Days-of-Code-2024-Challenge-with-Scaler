int Solution::permuteStrings(string A, string B) {
    int countA[26] = {0};
    int countB[26] = {0};

    for (char ch : A) {
        countA[ch - 'a']++;
    }

    for (char ch : B) {
        countB[ch - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (countA[i] != countB[i]) {
            return 0;
        }
    }

    return 1;
}
