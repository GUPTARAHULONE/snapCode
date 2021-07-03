vector<int> Solution::subUnsort(vector<int> &A) {

   
  
    
    // for(int k=j+1;k<n;k++)
    // {
    //     if(A[k]>max_value)
    //     {end=k-1;
    //     break;}
    // }
    
    // if(end==n-1)
    // {
    //     while(A[end]==max_value)
    //     {
    //         end--;
    //     }
    // }
    // int k=n-1;
    // while(A[k]>=A[k-1] && A[k]>=max_value)
    // {
    //     k--;
       
    // }
    //  end=k;
    // return {start,end};
    
    
    
    
    
    
    
    //  int n=A.size(),start=-1,max_value=0,j,end=n-1;
    // stack<int>s;
    // for(int i=0;i<n;i++){
        
    //     if(s.empty())
    //     {
    //         s.push(i);
    //          max_value=max(max_value,A[i]);
    //     }
          
        
    //     else if(A[i]>=A[i-1]){
    //         s.push(i);
    //         max_value=max(max_value,A[i]);
    //     }
    //     else
    //     {
    //         j=i;
    //         while(!s.empty() && A[s.top()]>A[i])
    //         {
                
    //             start=s.top();
    //             s.pop();
    //         }
    //       if(s.empty())
    //       start=0;
            
    //         break;
    //     }
    // }
    // if(start==-1)
    // return {-1};
    
    // for(int k=j+1;k<n;k++)
    // {
    //     if(A[k]>max_value)
    //     {end=k-1;
    //     break;}
    // }
    
    // if(end==n-1)
    // {
    //     while(A[end]==max_value)
    //     {
    //         end--;
    //     }
    // }
    // int k=n-1;
    // while(A[k]>=A[k-1] && A[k]>=max_value)
    // {
    //     k--;
       
    // }
    //  end=k;
    // return {start,end};
    
    
    
    
       int n=A.size();
    vector<int>res;
    int s=-1,e=-1;
    for(int i=0;i<n-1;i++){
        if(A[i]>A[i+1]){
            s=i;
            break;
        }
    }
    if(s==-1){
        res.push_back(-1);
        return res;
    }
    for(int i=n-1;i>0;i--){
        if(A[i]<A[i-1]){
            e=i;
            break;
        }
    }
   // cout<<s<<" "<<e<<endl;
    int minm=A[s],maxm=A[s];
    for(int i=s+1;i<=e;i++){
        if(A[i]<minm)
         minm=A[i];
        else if(A[i]>maxm)
         maxm=A[i];
    }
    for(int i=0;i<s;i++){
        if(A[i]>minm){
         s=i;
         break;
        }
    }
    for(int i=n-1;i>e;i--){
        if(A[i]<maxm){
         e=i;
         break;
        }
    }
    res.push_back(s);
    res.push_back(e);
    return res;
    
    
    
    
    
    
    
    
}
