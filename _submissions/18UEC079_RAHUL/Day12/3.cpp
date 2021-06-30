double Solution::findMedianSortedArrays(const vector<int> &A, const vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

     //  if(A.empty() && !B.empty())
//  {  int n=B.size();
//      if(B.size()%2==0)
//      {
//          return (B[n/2]+B[n/2 -1])/2;
//      }
//      else
//      return B[n/2];
//  }
//   if(!A.empty() && B.empty())
//  { int n=A.size();
//      if(A.size()%2==0)
//      {
//          return (A[n/2]+A[n/2 -1])/2;
//      }
//      else
//      return A[n/2];
//  }
//  if(A.size()<B.size())
//   {
//  int x=A.size();
//  int y=B.size();
//  int low=0,high=x;
//  while(low<=high)
//  {
//      int partitionx=(low+high)/2;
//      int partitiony=(x+y+1)/2 -partitionx;
     
//      int maxleftx=(partitionx==0)?INT_MIN:A[partitionx-1];
//       int minrightx=(partitionx==0)?INT_MAX:A[partitionx];
//       int maxlefty=(partitionx==0)?INT_MIN:B[partitiony-1];
//       int minrighty=(partitionx==0)?INT_MAX:B[partitiony];
     
//      if(maxleftx<=minrighty && maxlefty<=minrightx)
//      {
//          if((x+y)%2==0)
//          return (max(maxleftx,maxlefty)+min(minrightx,minrighty))/2;
//          else 
//          return max(maxleftx,maxlefty);
//      }
//      else if(maxleftx>minrighty)
//       high=partitionx-1;
//       else 
//       low=partitionx+1;
//  }
//   }
//   else
//   {
//       int x=B.size();
//  int y=A.size();
//  int low=0,high=x;
//  while(low<=high)
//  {
//      int partitionx=(low+high)/2;
//      int partitiony=(x+y+1)/2 -partitionx;
     
//      int maxleftx=(partitionx==0)?INT_MIN:A[partitionx-1];
//       int minrightx=(partitionx==0)?INT_MAX:A[partitionx];
//       int maxlefty=(partitionx==0)?INT_MIN:B[partitiony-1];
//       int minrighty=(partitionx==0)?INT_MAX:B[partitiony];
     
//      if(maxleftx<=minrighty && maxlefty<=minrightx)
//      {
//          if((x+y)%2==0)
//          return (max(maxleftx,maxlefty)+min(minrightx,minrighty))/2;
//          else 
//          return max(maxleftx,maxlefty);
//      }
//      else if(maxleftx>minrighty)
//       high=partitionx-1;
//       else 
//       low=partitionx+1;
//  }
//   
     if(A.size()>B.size())return findMedianSortedArrays(B,A);
    
    int x = A.size();
    int y = B.size();
    
    int low =0;
    int high = x;
    
    while(low<=high)
    {
        int partX = (low+high)/2;
        int partY = (x+y+1)/2-partX;
        
        int maxleftX = (partX==0)?INT_MIN:A[partX-1];
        int minrightX = (partX==x)?INT_MAX:A[partX];
        
        int maxleftY = (partY==0)?INT_MIN:B[partY-1];
        int minrightY = (partY==y)?INT_MAX:B[partY];
        
        
        if(maxleftX<=minrightY && maxleftY<=minrightX)
        {
            if((x+y)%2==0)
                return  (double)(max(maxleftX,maxleftY)+min(minrightX,minrightY))/2;
            else
                return (double)(max(maxleftX,maxleftY));
        }
        else if(maxleftX>minrightY)
        {
            high = partX-1;
        }
        else if(maxleftY>minrightX)
        {
            low = partX+1;
        }
    }
    
    
    
    
}
