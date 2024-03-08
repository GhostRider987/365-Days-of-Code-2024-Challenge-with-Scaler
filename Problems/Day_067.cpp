bool isprime(int n) {
    for (int i=2; i<=sqrt(n); i++) {
        if (n%i == 0) {
            return false;
        }
    }
    return true;
}

vector<int> Solution::primesum(int A) {
    vector<int> v;
    if (A < 2) {
        return v; 
    }
    for(int i=2; i<A/2; i++){
        if(isprime(i) && isprime(A-i)){
            v.push_back(i);
            v.push_back(A-i);
            return v;
        }
    }
}
