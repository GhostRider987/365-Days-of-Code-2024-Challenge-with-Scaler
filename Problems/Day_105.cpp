vector<int> Solution::flip(string A) {
    int n = A.length();
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        if(A[i]=='1'){
            arr[i]=-1;
        }
        else{
            arr[i]=1;
        }
    }
    
    int l=0;
    int cur_sum =0;
    int best_sum=0;
    pair<int,int>ans = make_pair(INT_MAX, INT_MAX);
    for(int i=0;i<n;i++){
        if(cur_sum+arr[i]<0){
            l=i+1;
            cur_sum = 0;
        }
        else{
            cur_sum+=arr[i];
        }
        if(best_sum<cur_sum){
            best_sum=cur_sum;
            ans.first = l;
            ans.second = i;
        }
    }
    if(ans.first==INT_MAX) return vector<int>();
    
    vector<int>result;
    result.push_back(ans.first+1);
    result.push_back(ans.second+1);
    return result;
}
