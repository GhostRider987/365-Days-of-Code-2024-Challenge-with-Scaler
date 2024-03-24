int Solution::solve(string A, int B) {
    string days[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int startDayIndex = 0;

    for (int i = 0; i < 7; ++i) {
        if (days[i] == A) {
            startDayIndex = i;
            break;
        }
    }

    // Calculate full weeks and remaining days
    int fullWeeks = (B - 1) / 7;
    int remainingDays = (B - 1) % 7;

    // Check if there's an additional Sunday
    int additionalSunday = (startDayIndex + remainingDays >= 6) ? 1 : 0;

    // Total Sundays
    return fullWeeks + additionalSunday;
}
