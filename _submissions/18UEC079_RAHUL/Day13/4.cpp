string expandAroundCenter(string s, int c1, int c2) {
  int l = c1, r = c2;
  int n = s.length();
  while (l >= 0 && r <= n-1 && s[l] == s[r]) {
    l--;
    r++;
  }
  return s.substr(l+1, r-l-1);
}

string Solution::longestPalindrome(string str) {
    
    
    
    //  TLE  ''''''
    //   int n=str.length(),max_length=0,k=INT_MAX;
    //     string ans="";
        
    //      bool P[n][n]; 
    //   memset(P, false , sizeof(P)); 
        
       
    //     map<int,string>m;
    //       // palindrome of single length 
    // for (int i= 0; i< n; i++) 
    //     P[i][i] = true; 
        
        
    //     // palindrome of length 2 
    //     for (int i=0; i<n-1; i++) 
    // { 
    //     if (str[i] == str[i+1]) 
    //     { 
    //         P[i][i+1] = true; 
    //         max_length=2;
    //           ans=str.substr(i,2);
           
    //             m[i]=ans; 
    //     } 
    // }
        
    //      for (int gap=2 ; gap<n; gap++) 
    // { 
    //     // Pick starting point for current gap 
    //     for (int i=0; i<n-gap; i++) 
    //     { 
    //         // Set ending point 
    //         int j = gap + i; 
  
    //         // If current string is palindrome 
    //         if (str[i] == str[j] && P[i+1][j-1] ) 
    //           {  P[i][j] = true; 
    //             if(j-i+1>max_length )
    //              { 
    //                  max_length=j-i+1;
    //                  ans=str.substr(i,j-i+1);
    //                  m.clear();
    //                  m[i]=ans;
                     
    //           }
    //           else if(j-i+1==max_length )
    //           {
    //               ans=str.substr(i,j-i+1);
    //                  m[i]=ans;
    //           }
  
    //     } 
    // }
    // }

    //     if(ans.empty())
    //       { ans+=str[0];
    //         return ans;
               
    //       }
    //   auto it=m.begin();
    //   return it->second;
       











 

  int n = str.length();
  if (n == 0) return "";
  string longest = str.substr(0, 1);  // a single char itself is a palindrome
  for (int i = 0; i < n-1; i++) {
    string p1 = expandAroundCenter(str, i, i);
    if (p1.length() > longest.length())
      longest = p1;
 
    string p2 = expandAroundCenter(str, i, i+1);
    if (p2.length() > longest.length())
      longest = p2;
  }
  return longest;

}











