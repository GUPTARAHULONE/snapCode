int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
// int i=1;
    
//     while(i<A.size())
//     {
//         if(A[i]==A[i-1])
//         {
//             A.erase(A.begin()+i);
//         }
//         else
//         i++;
//     }
//     return A.size();
 int i=0,j=1;
 
   while(j<A.size())
   {
       if(A[i]==A[j])
       j++;
       else
       {
           i++;
           A[i]=A[j];
           j++;
       }
   }
   A.erase(A.begin()+i+1,A.end());
    return A.size();
}
