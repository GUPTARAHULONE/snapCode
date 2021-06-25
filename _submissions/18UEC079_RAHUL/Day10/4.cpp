int Solution::solve(string A) {
    int n=A.length();

    int i=0,j=n-1,count=0;

    while(i<j)
    {
         if(A[i]!=A[j] && count==0)
         {
             if(A[i]==A[j-1])
              j--;
              else if(A[i+1]==A[j])
              i++;
              else
              return 0;
             count=1;
         }
        else  if(A[i]!=A[j] && count==1)
         {
            return 0;
         }
         else
         {
             i++;
             j--;
         }
    }
     return 1;
}
