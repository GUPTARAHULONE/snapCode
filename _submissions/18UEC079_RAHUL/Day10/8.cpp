int Solution::evalRPN(vector<string> &A) {
    int n=A.size();
    stack<int>s;
//   if(A[n-1]!="+" || A[n-1]!="-" || A[n-1]!="*" || A[n-1]!="/")
//   {
//       int a=stoi(A[n-1]);
//       return a;
//   }

//   if(n==1)
//   {
//       int a=stoi(A[0]);
//       return a;
//   }
  
    for(int i=0;i<n;i++)
    {
        if(A[n-1]!="+" || A[n-1]!="-" || A[n-1]!="*" || A[n-1]!="/")
        {
            //int a=stoi(A[i]);
            //s.push(a);
             s.push(atoi(A[i].c_str()));
        }
        else
        {
            int a1=s.top(),a3;
            s.pop();
             int a2=s.top();
            s.pop();
            if(A[i]=="+")
             a3=a2+a1;
             else if(A[i]=="-")
             a3=a2-a1;
              else if(A[i]=="*")
             a3=a2*a1;
              else 
             a3=a2/a1;

             s.push(a3);
        }
    }
    int ans=s.top();
    return ans;
}
