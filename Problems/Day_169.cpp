vector<int> Solution::solve(vector<int> &nums) {
        int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++)
            if (nums[i] != 0)
                nums[j++] = nums[i];
        for (;j < nums.size(); j++)
            nums[j] = 0;
        return nums;
}
