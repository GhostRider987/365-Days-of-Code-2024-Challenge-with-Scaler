int atmost(int B, vector<int> &A){
    int i=0;
    int j=0;
    int count = 0;
    map<int,int>m;
    
    while(i<A.size()){
        m[A[i]]++;
        while(m.size()>B){
            auto it = m.find(A[j]);
            it->second--;
            if(it->second==0) m.erase(it);
            j++;
        }
        count+=(i-j+1);
        i++;
    }
    return count;
}

int Solution::solve(vector<int> &A, int B) {
    return atmost(B,A)-atmost(B-1,A);
}
