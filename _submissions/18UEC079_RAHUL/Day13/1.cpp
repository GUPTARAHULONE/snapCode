vector<vector<int> > Solution::solve(int A) {
    vector<vector<int> >v;
    vector<int>ans,temp;
        ans.push_back(1);
        if(A==0)
            return v;
        
       v.push_back(ans);
         
         if(A==1)
            return v;
          
          ans.push_back(1); 
           v.push_back(ans);
        for(int i=3;i<=A;i++)
        {
            
              temp.push_back(1);
           for(int j=1;j<i;j++)
           {
               int a=ans[j-1]+ans[j];
                temp.push_back(a);
           }
             temp.push_back(1);
             
             ans=temp;
             v.push_back(ans);
             temp.clear();
        }
        return v;
}
