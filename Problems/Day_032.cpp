int Solution::solve(int A) {
    if(A == 0){
        return 0;
    }
     int product = 1;
    
    while (A > 0) {
        int digit = A % 10;
        product *= digit;
        A /= 10;
    }
    
    return product;
}
