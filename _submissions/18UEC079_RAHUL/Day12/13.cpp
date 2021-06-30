int Solution::maximumGap(const vector<int> &arr) {


//  MEMORY LIMIT EXCEEDED.
//     int n=A.size(),min_num=INT_MAX,ans=0;
//     if(n<2)
//     return 0;
//     set<int>s;
//     for(int i=0;i<n;i++)
//   {  s.insert(A[i]);
//     min_num=min(min_num,A[i]);}
    
//      int key = min_num;
//      int j=0;
//     while(j++<n)
//     {
     
//     auto it = s.upper_bound(key);
//     if (it == s.end())
//       break;
//       else
//       {
//           int num=*it;
//           ans=max(ans,num-key);
//           key=num;
//       }  
//     }
     
//     return ans;
    
// nlog(n)
//   vector<int>a=A;
// if(A.size()<2)
// return 0;
//     int i;
//     sort(a.begin(),a.end());
//     long long int d,d1=INT_MIN;
//     for(i=0;i<a.size()-1;i++)
//     {
//         d=abs(a[i+1]-a[i]);
//         if(d1<d)
//         d1=d;
//     }
//     return d1;




 int n=arr.size();
 // Find maximum and minimum in arr[]
    int maxVal = arr[0], minVal = arr[0];
    for (int i = 1; i < n; i++) {
        maxVal = max(maxVal, arr[i]);
        minVal = min(minVal, arr[i]);
    }
 
    // Arrays to store maximum and minimum values
    // in n-1 buckets of differences.
    int maxBucket[n - 1];
    int minBucket[n - 1];
    fill_n(maxBucket, n - 1, INT_MIN);
    fill_n(minBucket, n - 1, INT_MAX);
 
    // Expected gap for every bucket.
    float delta = (float)(maxVal - minVal) / (float)(n - 1);
 
    // Traversing through array elements and
    // filling in appropriate bucket if bucket
    // is empty. Else updating bucket values.
    for (int i = 0; i < n; i++) {
        if (arr[i] == maxVal || arr[i] == minVal)
            continue;
 
        // Finding index of bucket.
        int index = (float)(floor(arr[i] - minVal) / delta);
 
        maxBucket[index] = max(maxBucket[index], arr[i]);
           minBucket[index] = min(minBucket[index], arr[i]);
    }
 
    // Finding maximum difference between maximum value
    // of previous bucket minus minimum of current bucket.
    int prev_val = minVal;
    int max_gap = 0;
    for (int i = 0; i < n - 1; i++) {
        if (minBucket[i] == INT_MAX)
            continue;
        max_gap = max(max_gap, minBucket[i] - prev_val);
        prev_val = maxBucket[i];
    }
    max_gap = max(max_gap, maxVal - prev_val);
 
    return max_gap;


}

