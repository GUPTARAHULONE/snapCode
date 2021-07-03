int myCompare(string X, string Y) 
{ 
    // first append Y at the end of X 
    string XY = X.append(Y); 
  
    // then append X at the end of Y 
    string YX = Y.append(X); 
  
    // Now see which of the two formed numbers is greater 
    return XY.compare(YX) > 0 ? 1: 0; 
}





string Solution::largestNumber(const vector<int> &A) {
    // int n=A.size();
    //  vector<int>b=A;
    //   vector<string>v;
    //  string s="";
    // //  sort(b.rbegin(),b.rend());
    // //  for(int i=0;i<b.size();i++)
    // //  {
    // //      s+=to_string(b[i]);
    // //  }
    
    //  for(int i=0;i<n;i++)
    //  {
    //      v.push_back(to_string(A[i]));
    //  }
    //  sort(v.begin(),v.end(),cmp);
     
     
    // //   for(int i=0;i<n;i++)
    // //  {
    // //     cout<<v[i]<<endl;
    // //  }
    //  if(v[0]=="0" && v[n-1]=="0")
    //  return "0";
    //   for(int i=n-1;i>=0;i--)
    //   {
    //       s+=v[i];
    //   }
  //   return s;
     
     
     
     
      //sort(A.begin(), A.end(), myCompare); 
 
    
    vector<string> b;
    for(int i=0;i<A.size();i++){
        b.push_back(to_string(A[i]));
    }
    sort(b.begin(),b.end(),myCompare);
    string ans="";
    for(int i=0;i<b.size();i++){
     ans+=b[i];
    }
    int i=0;
    while(ans[i]=='0'){
        i++;
    }
    if(i==ans.length())
     ans="0";
    return ans;
        
}
