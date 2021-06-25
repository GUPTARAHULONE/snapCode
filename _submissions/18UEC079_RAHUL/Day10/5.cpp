int Solution::solve(int A) {
int count=0;
if(A==0)
return 1;
    while(A!=0)
    {
        int a=A&1;
 //cout<<a<<"L"<<endl;
        if(a==0)
        {
            A=A>>1;
        //    cout<<A<<"L"<<endl;
            count++;
        }
        else 
        return count;
    }
    return count;
}
