int Solution::solve(vector<int> &A) {
    vector<int> v(A.size());
    for(int i=A.size()-1; i>=0; i--){
        v[i]=A[i];
        if(i+2<A.size()) v[i]+=v[i+2];
    }
    int ans=0;
    int odd=0, even=0;
    for(int i=0; i<A.size(); i++){
        int odc=0, evc=0;
        if(i%2){
            if(i+1<A.size()) odc+=v[i+1];
            if(i+2<A.size()) evc+=v[i+2];
        }
        else{
            if(i+1<A.size()) evc+=v[i+1];
            if(i+2<A.size()) odc+=v[i+2];
        }
        if(odd+odc == even+evc){
            ans++;  
        }
        if(i%2){
            odd+=A[i];
        }
        else{
            even+=A[i];
        }
    }
    return ans;
}
