int Solution::solve(vector<int> &A) {
    int n=A.size();
    long long int ans=0;
    if(n%2==0)
    return ans;

    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        ans^=A[i];
    }
    return ans;
}
