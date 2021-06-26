int Solution::solve(string A) {
    map<char,int >m;
  int n=A.length();

  for(int i=0;i<n;i++)
  {
     m[A[i]]++;
  }
  
  int count=0;
  for(auto it=m.begin();it!=m.end();it++)
  {
      int a=it->second;
     
      if(a%2!=0)
      count++;

      if(count>1)
      return 0;
  }
  return 1;
}
