int Solution::trailingZeroes(int n) {
    int count=0;
        long long int i;
        for (i = 5; n / i >= 1; i *= 5) 
        count += n / i; 
  
    return count;
}
