int Solution::gcd(int A, int B) {
    //using recursion
    if(B > A) return gcd(B,A);
    
    //base case 
    if(B == 0) return A;
    return gcd(B, A%B);
}
