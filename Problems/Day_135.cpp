string Solution::solve(string A) {
    int n = A.size();
    vector<int> digits;
    
    // Convert string to vector of digits
    for(char c : A) {
        digits.push_back(c - '0');
    }
    
    // Find the pivot
    int pivot = -1;
    for(int i = n - 2; i >= 0; i--) {
        if(digits[i] < digits[i + 1]) {
            pivot = i;
            break;
        }
    }
    
    // If no pivot found, return -1
    if(pivot == -1) return "-1";
    
    // Find the smallest digit to the right of pivot that is greater than pivot
    int swapIndex = -1;
    for(int i = n - 1; i > pivot; i--) {
        if(digits[i] > digits[pivot]) {
            swapIndex = i;
            break;
        }
    }
    
    // Swap pivot and swap
    swap(digits[pivot], digits[swapIndex]);
    
    // Sort the digits to the right of pivot
    sort(digits.begin() + pivot + 1, digits.end());
    
    // Convert digits back to string
    string result = "";
    for(int digit : digits) {
        result += to_string(digit);
    }
    
    return result;
}
