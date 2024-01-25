int Solution::singleNumber(const vector<int> &A) {
    int ans = 0; 
    
    for(int i=0; i<32; i++){
        int Set = 0, Unset = 0;
        for(int j=0; j<A.size(); j++){
            if((1<<i) & A[j]) Set++;
            else Unset++;
        }
        if(Set%3){
            ans = ans | (1<<i);
        }
    }
    return ans;
}
