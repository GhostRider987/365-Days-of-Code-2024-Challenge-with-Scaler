vector<int> Solution::allFactors(int A) {
    vector<int> factors;

    // Special case for A = 1
    if (A == 1) {
        factors.push_back(1);
        return factors;
    }

    for (int i = 1; i * i <= A; ++i) {
        if (A % i == 0) {
            factors.push_back(i);

            // Avoid duplicate factors for perfect squares
            if (i != A / i) {
                factors.push_back(A / i);
            }
        }
    }
    
    sort(factors.begin(), factors.end());

    return factors;
}
