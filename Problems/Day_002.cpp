int Solution::maxSubArray(const vector<int> &A) {
    int sum = 0;
    int ans = INT_MIN;
    
    for(int i=0; i<A.size(); i++){
        sum+=A[i];
        if(sum>ans) ans=sum;
        if(sum<=0) sum = 0;
    }
    return ans;
}
