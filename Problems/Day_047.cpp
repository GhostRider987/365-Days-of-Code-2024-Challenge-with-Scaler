void factorial(vector<int>& fact, int n){
    fact[0]=1;
    fact[1]=1;
    for(int i=2; i<n; i++){
        fact[i]=i*fact[i-1]%1000003;
    }
}

int Solution::findRank(string A) {
    string s=A;
    sort(s.begin(),s.end());
    int n = s.size();
    
    vector<int> fact(n);
    factorial(fact,n);
    int ind = 0;
    long long int ans = 0;
    vector<int> check(n,1);
    for(int i=0; i<n; i++){
        if(check[i] == -1) continue;
        else if(A[ind] != s[i]){
            ans+=fact[n-ind-1];
        }
        else{
            check[i]=-1;
            ind++;
            i=-1;
        }
    }
    return (ans+1)%1000003;
}
