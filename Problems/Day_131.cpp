int ifPossible(vector<int> &v, int mid, int B){
    int sum = 0;
    for(int i=0; i<v.size(); i++){
            if(v[i]>mid){
                sum += (v[i]-mid);
            }
    }
    return (sum >= B);
}

int Solution::solve(vector<int> &A, int B) {
    int left = *min_element(A.begin(), A.end());
    int right = 1e9;
    int ans = -1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(ifPossible(A, mid, B)){
            ans = mid;
            left = mid+1;
        }
        else{
            right = mid-1;
        }
        mid = left+(right-left)/2;
    }
    return ans;
}
