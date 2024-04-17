int Solution::perfectPeak(vector<int> &A) {
    int n = A.size();
    int leftmax[n];
    int rightmin[n];
    
    int ans=-1;
    leftmax[0]  = A[0];
    rightmin[n-1] = A[n-1];
    
    for(int i=1;i<n;i++){
        leftmax[i] = max(A[i],leftmax[i-1]);
    }
    for(int i=n-2;i>=0;i--){
        rightmin[i] = min(A[i], rightmin[i+1]);
    }
    
    for(int i=1;i<n-1;i++){
        if(A[i]>leftmax[i-1] && A[i]<rightmin[i+1]){
            ans = 1;
        }
    }

    
    if(ans==-1){
        return 0;
    }
    else{
        return 1;
    }
}

