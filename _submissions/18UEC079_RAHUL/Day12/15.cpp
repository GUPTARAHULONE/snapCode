vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<int>ans;
    int n=A.size(),j=1;
    
    for(int i=0;i<(n+1)/2;i++)
    {
        if(j<n)
        {
            ans.push_back(A[j]);
            ans.push_back(A[j-1]);
        }
        else
        {
            ans.push_back(A[j-1]);
        }
        j+=2;
    }
    return ans;
}
