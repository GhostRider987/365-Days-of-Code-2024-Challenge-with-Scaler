int reverse(int n){
    int b=0;
    while(n){
        b<<=1;
        b|=n&1;
        n>>=1;
    }
    return b;
}

int Solution::solve(int A) {
    if(A==1) return 1;
    int ans,count=1,len=1;
    int p;
    while(count<A){
        len++;
        if(len%2==0) p=(len-2)/2;
        else p=len/2;
        count+=pow(2,p);
    }
    
    count-=pow(2,p);
    ans=pow(2,len-1);
    int agla = A-count-1;
    ans |= agla*(int)pow(2,len/2);
    ans |= reverse(ans);
    return ans;
}

