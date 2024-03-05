vector<int> Solution::findOccurences(vector<int> &A) {
   map<int, int> occurrences;

    // Count occurrences of each element in the array
    for (int num : A) {
        occurrences[num]++;
    }

    // Create a vector of pairs to store element and its occurrences
    vector<pair<int, int>> pairs;
    for (auto it : occurrences) {
        pairs.push_back({it.first, it.second});
    }

    // Sort the vector of pairs based on element value
    sort(pairs.begin(), pairs.end());

    // Create the final result vector with occurrences in order
    vector<int> result;
    for (auto pair : pairs) {
        result.push_back(pair.second);
    }

    return result;

}
