int func(vector<int> &v, int val){
    int len=0;
    int low=0, high=v.size()-1;
    
    while(low<=high){
        int mid = low+(high-low)/2;
        if(v[mid]<val){
            len=mid+1;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return len;
}

int Solution::findMedian(vector<vector<int> > &A) {
    int n = A.size();
    int m = A[0].size();
    int low = 0;
    int high = INT_MAX;
    int ans;
    while(low<=high){
        int mid = low+(high-low)/2;
        int count = 0;
        for(int i=0; i<n; i++){
            count += func(A[i], mid);
        }
        
        if(count<=(n*m)/2){
            low=mid+1;
            ans=mid;
        } 
        else high=mid-1;
    }
    return ans;
}
