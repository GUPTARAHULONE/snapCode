int Solution::longestSubsequenceLength(const vector<int> &A) {
 
     int n=A.size();
    vector<int>lis(n,1);
   
    if(n==1||n==0)
    return n;
 
   // lis[0]=1;
    for(int i=1;i<n;i++)
    {
       // lis[i]=1;
        for(int j=0;j<i;j++)
        {
            if(A[i]>A[j])
            lis[i]=max(lis[i],1+lis[j]);
        }
    }
    vector<int>lds(n,1);
   // lds[n-1]=1;
    for(int i=n-2;i>=0;i--)
    {
       // lis[i]=1;
        for(int j=i+1;j<n;j++)
        {
            if(A[i]>A[j])
            lds[i]=max(lds[i],1+lds[j]);
        }
    }
    int m=lis[0]+lds[0]-1;
    for(int i=1;i<n;i++)
    {
        m=max(m,lis[i]+lds[i]-1);
    }
    return m;
    
    
}
