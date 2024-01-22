int Solution::isPalindrome(int A) {
    int rev=0;
    int temp=A;
    while(A>0){
        rev = (A % 10)+(rev*10);
        A/=10;
    }
    return rev==temp;
}
