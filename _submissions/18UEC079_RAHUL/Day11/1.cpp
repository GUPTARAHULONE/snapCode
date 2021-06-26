vector<int> Solution::getRow(int A) {
    vector<int>ans,temp;
        ans.push_back(1);
        if(A==0)
            return ans;
        
        // ans.push_back(1);
         ans.push_back(1);
         if(A==1)
            return ans;
            
        for(int i=2;i<=A;i++)
        {
            
              temp.push_back(1);
           for(int j=1;j<i;j++)
           {
               int a=ans[j-1]+ans[j];
                temp.push_back(a);
           }
             temp.push_back(1);
             
             ans=temp;
             temp.clear();
        }
        return ans;
}
