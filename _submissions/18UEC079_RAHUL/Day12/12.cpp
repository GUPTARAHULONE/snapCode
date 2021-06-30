int Solution::repeatedNumber(const vector<int> &A) {
   
   // cant change array
    // int n=A.size();
    // for(int i=0;i<n;i++)
    // {
    //     int idx=abs(A[i])-1;
    //     A[idx]=-1*(A[idx]);
        
    //     if(A[idx]>0)
    //     return idx+1;
    // }

    // Memory exceeded
    // set<int>s;
    // for(int i=0;i<n;i++)
    // {
    //     if(s.find(A[i])!=s.end())
    //     return A[i];
    //     else
    //     s.insert(A[i]);
    // }
    
   // return -1;


   vector <bool> v(A.size());
    fill(v.begin(), v.end(), true);

    for(int i=0;i<A.size();i++){
        if(v[A[i]]){
            v[A[i]]=false;
        }
        
        else
            return A[i];
    }
    
 return -1;


}

