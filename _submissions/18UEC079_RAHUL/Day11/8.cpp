int Solution::trap(const vector<int> &A) {
    int n=A.size();
    vector<int>l(n),r(n);
     l[0]=A[0];
    for(int i=1;i<n;i++)
    l[i]=max(A[i],l[i-1]);
   
   r[n-1]=A[n-1];
    for(int i=n-2;i>=0;i--)
    {
        r[i]=max(r[i+1],A[i]);
    }
  long long int sum=0;
   for(int i=0;i<n;i++)
    sum+=min(l[i],r[i])-A[i];


   return sum;
}