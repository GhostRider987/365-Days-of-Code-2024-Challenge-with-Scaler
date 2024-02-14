int Solution::solve(int A, int B, int C, int D) {
     int sides[4] = {A, B, C, D};

    // Sort the sides in non-decreasing order
    sort(sides, sides + 4);

    // Check for equality of opposite sides
    if (sides[0] == sides[1] && sides[2] == sides[3]) {
        return 1;
    }

    return 0;
}
