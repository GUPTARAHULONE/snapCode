bool comp(const vector<int>v1,const vector<int> v2)
{
    return v1[1]<v2[1];
}
int Solution::solve(vector<vector<int> > &A) {
    sort(A.begin(),A.end(),comp);

int  n=A.size(),count=1;
   int p=A[0][1];
   for(int i=1;i<n;i++)
   {
       if(A[i][0]>p)

       {
           p=A[i][1];
           count++;
       }
       
   }
  return count;
}
