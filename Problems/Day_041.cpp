int Solution::hammingDistance(const vector<int> &A) {
    long long ans = 0;
    for(int i=0; i<32; i++){
        long long count0 = 0; 
        long long count1 = 0;
        for(int j=0; j<A.size(); j++){
            if(((1<<i) & A[j]) == 0) count0++;
            else count1++;
        }
        ans += count0*count1*2 % 1000000007;
    }
    return ans % 1000000007;
}
