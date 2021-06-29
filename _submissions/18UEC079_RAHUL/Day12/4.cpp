int Solution::solve(string A) {
    int n=A.length();
    stack<char>s;
    for(int i=0;i<n;i++)
    {
        if(A[i]=='(')
        s.push('(');
        else
        {
            if(s.empty())
               s.push(')');
          else if(s.top()=='(')
            s.pop();
            else
          s.push(')');
        }
    }
    return s.size();
}
