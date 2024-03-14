string Solution::solve(int A) {
  if (A < 1 || A > 12) // Check if the month is out of range
        return "Invalid";

    // Using modular arithmetic to determine the season
    if (A >= 3 && A <= 5)
        return "Spring";
    else if (A >= 6 && A <= 8)
        return "Summer";
    else if (A >= 9 && A <= 11)
        return "Autumn";
    else
        return "Winter";
}
