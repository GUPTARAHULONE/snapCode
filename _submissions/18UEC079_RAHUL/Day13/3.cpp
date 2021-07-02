int Solution::search(const vector<int> &A, int B) {
    int n=A.size();
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(B==A[mid])
        return mid;
        else if(A[low]<A[mid])
        {
            if(B>=A[low] && B<=A[mid])
            high=high-1;
            else 
            {
              low=low+1;
            }
        }
        else
        {
            low=low+1;
        }
    }
    return -1;
}
