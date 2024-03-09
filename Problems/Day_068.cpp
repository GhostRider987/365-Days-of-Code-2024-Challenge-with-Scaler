string Solution::convert(string A, int B) {
    int k = 0;
    bool flag = 0;
    string result = "";
    
    if (B == 1) {
        return A;
    }
    
    vector<string> row(B, "");
    
    for(int i=0; i<A.size(); i++){
        row[k] += A[i];
        
        if(flag==0){
            k++;
        }
        else{
            k--;
        }
        
        if (k == B - 1 || k == 0) {
            flag = !flag;
        }
    }
    
    for(int i=0; i<B; i++){
        result += row[i];
    }
    
    return result;
}
