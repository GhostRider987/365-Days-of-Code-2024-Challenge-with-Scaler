string Solution::solve(string A) {
     string result;
    int i = 0;
    int n = A.length();

    while(i < n){
        while(i < n && A[i] == ' ') i++;
        if(i >= n) break;
        int j = i + 1;
        while(j < n && A[j] != ' ') j++;
        string sub = A.substr(i, j-i);
        if(result.length() == 0) result = sub;
        else result = sub + " " + result;
        i = j+1;
    }
    return result;
}
