vector<int> Solution::solve(int A, int B, int C, int D) {
    vector<int>ans;
    priority_queue<int,vector<int>,greater<int>>pq;
    set<int>s;
    pq.push(A);
     pq.push(B);
      pq.push(C);
                if(s.find(A)==s.end())
            {
                 s.insert(A);}
      if(s.find(B)==s.end())
            {
                 s.insert(B);}
                 
                  if(s.find(C)==s.end())
            {
                 s.insert(C);}
     
      while(ans.size()!=D)
      {
          int a=pq.top();
          pq.pop();
          
          if(ans.empty())
          ans.push_back(a);
          else if(!ans.empty()&& ans.back()!=a)
           ans.push_back(a);
         // cout<<a<<endl;
          if(s.find(a*A)==s.end())
      { pq.push(a*A);
        s.insert(a*A);}
            if(s.find(a*B)==s.end())
             { pq.push(a*B);
               s.insert(a*B);}
               if(s.find(a*C)==s.end())
                 {  pq.push(a*C);
                    s.insert(a*C);}
      
      }
      return ans;
}
