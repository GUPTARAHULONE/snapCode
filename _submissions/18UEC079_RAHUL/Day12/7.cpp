void b(vector<int> &A,int idx,int n,vector<vector<int> >& ans)
{   if(idx==n-1)
    { ans.push_back(A);
      return;}
    
    for(int i=idx;i<n;i++)
    {
      
        swap(A[i],A[idx]);
        b(A,idx+1,n,ans);
         swap(A[i],A[idx]);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    vector<vector<int> >ans;
    int n=A.size();
    sort(A.begin(),A.end());
    if(n==1)
    {
        return {{A[0]}};
    }
    // for(int i=0;i<n;i++)
    // {
        
    // }
    b(A,0,n,ans);
    
    return ans;
    
}
