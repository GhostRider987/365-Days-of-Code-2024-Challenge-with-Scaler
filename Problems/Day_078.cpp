int Solution::solve(int A) {
    A = abs(A);
        
        int last = 0;
        int running_sum = 0;

        while (running_sum < A || (running_sum - A) % 2 != 0) {
            last += 1;
            running_sum += last;
        }

        return last;
}
