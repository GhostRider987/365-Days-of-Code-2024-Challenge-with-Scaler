int Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    int count1=0, count2=0, ele1=INT_MAX, ele2=INT_MAX;
    for(int i=0; i<n; i++){
        if(ele1==A[i]) count1++;
        else if(ele2==A[i]) count2++;
        else if(count1==0){
            count1++;
            ele1=A[i];
        }
        else if(count2==0){
            count2++;
            ele2=A[i];
        }
        else{
            count1--;
            count2--;
        }
    }
    count1=0;
    count2=0;
    for(int i=0; i<n; i++){
        if(ele1==A[i]) count1++;
        else if(ele2==A[i]) count2++;
    }
    if(count1>n/3) return ele1;
    if(count2>n/3) return ele2;
    return -1;
}
