  void cu_island(vector<string> &A,int x,int y,int r,int c)
    {
        if(x<0||x>=r||y<0||y>=c||A[x][y]=='O')
            return ;
        A[x][y]='O';
        cu_island(A,x,y+1,r,c);
         cu_island(A,x,y-1,r,c);
         cu_island(A,x+1,y,r,c);
         cu_island(A,x-1,y,r,c);
    }
int Solution::black(vector<string> &A) {
    int rows=A.size();
        if(rows==0)
            return 0;
        int cols=A[0].size();
        int islands=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(A[i][j]=='X')
                {
                    islands++;
                    cu_island(A,i,j,rows,cols);
                }
               // cout<<A[i][j];
            }
           // cout<<endl;
        }

        return islands;
}
