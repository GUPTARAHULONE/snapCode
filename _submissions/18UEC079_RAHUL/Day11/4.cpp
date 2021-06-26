// bool isplan(string s)
// {  int n=s.length();
//     int i=0,j=n-1;
//     while(i<j)
//     {
//         if(s[i]!=s[j])
//         return false;

//         i++;
//         j--;
//     }
//     return true;
// }
int Solution::solve(string A) {
//     int n=A.length();
// int i=0,j=n-1;

//   for(i=0;i<n;i++)
//   {
//       if(isplan(A.substr(i)))
//       return i;
//   }
// return 0;



  /*int n=A.length();
    int l=0,h=n-1,count=0,count1=0,flag=0;
    
    while(l<=h)
    {
        if(A[l]!=A[h])
        {
            count++;
            l++;
            if(flag==1)
            {
                count+=count1;
                count1=0;
                flag=0;
            }
        }
        else
        {
            l++;
            h--;
            flag=1;
            count1++;
        }
    }
    return count;  */
    int n=A.length();
   int i = 0;
int j = n-1;
int cnt = 0;
while(i<=j){
    if(A[i] == A[j]) {
        i++; j--;
    }
    else{
        
        if(j == n-1){
            
            cnt++;
            i++;
        }
        
        else{
            
            cnt += (n-1-j);
            j = n-1;
        }
    }
}

return cnt;


}
