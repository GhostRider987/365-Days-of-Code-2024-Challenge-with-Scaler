vector<int> Solution::plusOne(vector<int> &A) {
    int n = A.size();
    int sum = A[n-1] + 1;
    int carry = sum / 10;
    A[n-1] = sum % 10;
    
    for(int i=n-2;i>=0;i--){
        if(carry == 1){
            A[i] = A[i] + 1;
            carry = A[i] / 10;
            A[i] = A[i] % 10;
        }
    }
    if(carry)
        A.insert(A.begin(), 1);
    int ct = 0;
    for(auto x:A){
        if(x > 0)
            break;
        ct++;
    }
    A.erase(A.begin(), A.begin()+ct);
    return A;
}
