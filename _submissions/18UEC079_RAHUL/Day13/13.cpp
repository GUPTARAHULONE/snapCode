//int ans=0;

// s(vector<int> &A,int n,int i,int j)
// {
//     if()
// }

int Solution::maximumGap(const vector<int> &A) {
    //int n=A.size(),i=0,j=n-1;
    
  //  s(A,n,0,n-1);
    
    // while(i<j)
    // {
    //     if(A[i]<=A[j])
    //     return j-i;
    //     else if(A[i+1]<=A[j])
    //     i++;
    //     else if(A[j-1]>=A[i])
    //     j--;
    //     else
    //     {
    //         i++;
    //         j--;
    //     }
        
    // }
    
    
    
    int n=A.size();
//  int maxDiff = 0; 
//     int i, j; 
  
//     for (i = 0; i < n; ++i) 
//     { 
//         for (j = n-1; j > i; --j) 
//         { 
//             if(arr[j] >=arr[i] && maxDiff < (j - i)) 
//                 maxDiff = j - i; 
//         } 
//     } 
  
//     return maxDiff; ;;;;;;;;;;;;;;;TIME EXCEEDEEDDDDDDDDDDDDDDDDDDDDDDD
//     int i,j,maxi=0;
  vector< pair <int,int> > v; 
  for(int i=0;i<n;i++)
  {
      v.push_back(make_pair(A[i],i));
  }
    sort(v.begin(),v.end());
//     for(i=0;i<n;i++)
//     {
//         for(j=i+1;j<n;j++)
//         {
//             maxi=max(maxi,(v[j].second-v[i].second));
//         }
//     }
//     return maxi;IT ALSO TIME EXCEEDEDDDDDDDDDDDDDDDDDDDDDDD;;;;;;;;;;;;;;;
 int ans=0;
    int rmax=v[n-1].second;
    for(int i=n-2;i>=0;i--){
        ans=max(ans,rmax-v[i].second);
        rmax=max(rmax,v[i].second);
    }
    return ans;
    
}
