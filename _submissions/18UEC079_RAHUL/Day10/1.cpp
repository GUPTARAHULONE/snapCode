int Solution::perfectPeak(vector<int> &A) {
    int n=A.size();
    vector<int>left(n),right(n);
    left[0]=A[0];
    for(int i=1;i<n;i++)
    {
        if(A[i]>left[i-1])
        left[i]=A[i];
        else
        left[i]=left[i-1];
    }
    right[n-1]=A[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(A[i]<right[i+1])
        right[i]=A[i];
        else
        right[i]=right[i+1];
    }

    for(int i=1;i<n-1;i++)
    {
        if(A[i]>left[i-1] && A[i]<right[i+1])
       return 1;
    }
    return 0;
}
