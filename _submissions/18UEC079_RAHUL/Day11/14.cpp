vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int> >ans;
    vector<int>v;
    int n=A.size();
    int i=0,j=0,k;
    for(j=0;j<n;j++)
    {  i=0;
       k=j;
        while(i>=0 && k>=0 && i<n && k<n)
        {
            v.push_back(A[i][k]);
            i++;
            k--;
        }
        ans.push_back(v);
        v.clear();
    }
   
     for(i=1;i<n;i++)
    {   
         j=n-1;
          k=i;
         while(k>=0 && j>=0 && k<n && j<n)
        {
            v.push_back(A[k][j]);
            k++;
            j--;
        }
        ans.push_back(v);
        v.clear();
    }
    return ans;
}
