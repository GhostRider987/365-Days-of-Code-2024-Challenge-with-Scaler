string Solution::solve(string A,string B){
    map<char,int> m;
    int cow = 0;
    int bull = 0;
    string ans;
    for(int i=0; i<A.length(); i++) m[A[i]]++;
    
    for(int i=0; i<A.length(); i++){
        if(A[i] == B[i]){
            bull++;
            m[A[i]]--;
        }
    }
    
    for(int i=0; i<A.length(); i++){
        if(A[i] != B[i] && m[B[i]]){
            cow++;
            m[B[i]]--;
        }
    }
    ans += to_string(bull)+"A"+to_string(cow)+"B";
    return ans;
}
