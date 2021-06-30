
    
    string Solution::fractionToDecimal(int A, int B) {
  


    //   double a=abs(double(A));
//     double b=abs(double(B));
    
//     double c=a/b;
//     if(A==0)
//     return to_string(0);
//   else if((A>0 && B>0)||(A<0 && B<0))
        
//     return to_string(c);
//     else if((A>0 && B<0)||(A<0 && B>0))
//   {  c=-c;
//      return to_string(c);
//   }

 long num = (long) A;
    long den = (long) B;
    
    if(!num)
        return "0";
    string s;
    
    // determine sign
    if(num < 0 ^ den < 0)
        s += '-';
        
    num = abs(num);
    den = abs(den);
    
    s += to_string(num/den);
    
    long rem = num%den;
    
    if(!rem)
        return s;
        
    s += '.';
    rem *= 10;
    
    map<long, long> mp;
    
    while(rem)
    {
        long q = rem/den;
        if(mp.find(rem) != mp.end())
        {
            s.insert(mp[rem], 1, '(');
            s += ')';
            break;
        }
        mp[rem] = s.size();
        s += to_string(q);
        rem = (rem%den)*10;
    }
    
    return s;



}


