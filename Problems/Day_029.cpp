int Solution::reverse(int A) {
    int rev = 0, temp = A;
    
    if(A<0) A=-A;
    while(A>0){
        if(rev>INT_MAX/10 || (rev==INT_MAX/10 && A%10>INT_MAX%10)){
            return 0;
        }
        rev = rev*10 + A%10;
        A/=10;
    }
    if(temp<0) rev = -rev;
    return rev;
}
