void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
//     
//  Not working for some cases...
//int m=A.size(),n=B.size(),i=0,j=0;
//
//     while(i<A.size() && j<n)
//     {
//         if( B[j]>A[i])
//         i++;
//         else 
//         {
//             A.insert(A.begin()+i,B[j]);
//             i++;
//             j++;
//         }
//     }
//   // i++;
//     while(j<n)
//     {
//          A.insert(A.begin()+i,B[j]);
//             i++;
//             j++;
//     }
    
    
    int i=0,j=0;
int n1 = A.size(), n2=B.size();
vector<int>c;

while(i+j < n1+n2)
{
    if(i==n1) c.push_back(B[j++]);
    else if(j == n2) c.push_back(A[i++]);
    else if(A[i] <= B[j]) c.push_back(A[i++]);
    else c.push_back(B[j++]);
}
A = c;
    
}
