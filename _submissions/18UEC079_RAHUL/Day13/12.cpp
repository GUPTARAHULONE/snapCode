bool cmp(const vector<int> &v1,const vector<int> &v2)
{
    return v1[1]<v2[1];
}
bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    // int n=A.size();
    // if(k>=n)
    // return 1;
    
    // vector<vector<int>>v(n,vector<int>(2));
    // for(int i=0;i<n;i++)
    // {
    //     v[i][0]=A[i];
    //     v[i][1]=B[i];
    // }
    // sort(v.begin(),v.end(),cmp);
    // //  for(int i=0;i<n;i++)
    // // {
    // //     cout<<v[i][0]<<" "<< v[i][1]<<endl;
       
    // // }
    // int c=1;
    // for(int i=1;i<n;i++)
    // {
    //     if(v[i][0]>=v[i-1][1])
    //     continue;
    //     else 
    //     c++;
    // }
    
    // if(k>=c)
    // return 1;
    
    // return 0;
    
    
     if(arrive.size()==K)
    return true;
 sort(arrive.begin(),arrive.end());
    sort(depart.begin(),depart.end());
    int i=0,j=0,c=0;
    while(i<arrive.size() && j<depart.size())
    {
        if(depart[j]>arrive[i])
          { c++;i++;}
          
        else
          { c--;j++; }
          
        if(c>K)
            return false;
    }
    return true;
    
    
}
