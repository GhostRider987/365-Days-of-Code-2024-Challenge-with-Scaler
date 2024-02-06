int Solution::highestScore(vector<vector<string> > &A) {
    unordered_map<string, int> totalMarks;
    unordered_map<string, int> count;

    for (const auto &entry : A) {
        string name = entry[0];
        int marks = stoi(entry[1]);

        totalMarks[name] += marks;
        count[name]++;
    }

    int maxAverage = 0;

    for (const auto &entry : totalMarks) {
        string name = entry.first;
        int total = entry.second;
        int totalCount = count[name];
        int average = total / totalCount; // rounding down to the nearest integer

        maxAverage = max(maxAverage, average);
    }

    return maxAverage;
}
