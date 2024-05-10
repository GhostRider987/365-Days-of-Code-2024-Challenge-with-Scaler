int Solution::solve(int A, int B, int C) {
    int mlow = 10 * ceil(A/10.0); 
    int mhigh = 10 * floor(B/10.0); 
  
  int count = (mhigh - mlow)/10;  
  if (B % 10 >= C)  
    count++;  
  if (A % 10 <=C && (A%10)) 
    count++; 
  
  return count;
}
