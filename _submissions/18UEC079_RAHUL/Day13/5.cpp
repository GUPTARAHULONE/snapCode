int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    
//      int i=0,j=2,flag=0;
 
//   while(j<A.size())
//   {
//     //   if(A[i]==A[j])
//     //   {   i++;
//     //       j++;
//     //   flag=1;
           
//     //   }
//     //   else if(A[i]!=A[j] || flag==1)
//     //   {
//     //       i++;
//     //       A[i]=A[j];
//     //       j++;
//     //       flag=0;
//     //   }
//     if(A[j]==A[j-1] && A[j]== A[j-2])
//     {
//          A.erase(A.begin()+j);
//     }
//     else
//     j++;
//   }
//  //  A.erase(A.begin()+i+1,A.end());
//     return A.size();
    
    
    
    
    
    
    int count = 0;          // Just moving duplicates at back of vector approach, faster;
    int size = A.size();
    for(auto i = 0; i<size; ++i)
    {
        if(i<size-2 && A[i]==A[i+1] && A[i]==A[i+2]) continue;
        else
            A[count++] = A[i];
    }
    return count;
    
    
    
    
    
    
    
    
}
