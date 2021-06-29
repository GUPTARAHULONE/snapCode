int Solution::solve(vector<int> &A) {
    sort(A.begin(),A.end());
    int n=A.size();
    map<int,int>m;
    
     for(int i=0;i<n;i++)
    {
       m[A[i]]++;
       
    }
    auto it=m.begin();
    int s=it->second;
    it++;
    for(it=it;it!=m.end();it++)
    {
        it->second+=s;
        s=it->second;
    }
    
    for(it=m.begin();it!=m.end();it++)
    {
        int a=it->first;
        if(a==s-it->second)
      return 1;
    }
      return -1;
}
