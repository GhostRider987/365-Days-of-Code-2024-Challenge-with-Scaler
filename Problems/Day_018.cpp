int Solution::solve(int A, int B) {
    int days = 0;
    
    // Calculate the number of days required to sell all units
    days = ceil((double)B / A);
    int weeks = ceil((double)days / 5);
    
    return weeks;
}
