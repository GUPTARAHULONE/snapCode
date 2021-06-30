vector<vector<int> > Solution::generateMatrix(int A) {
   // vector<vector<int> >grid(A,vector<int>(A,0));
    
    // if(A==1)
    // return {{1}};
    
    //   int bottom = A- 1, right = A-1;//Bottom right coordinates
    //     int top = 0, left = 0,z=1;//Top left coordinates
    //     while(bottom>=top&&right>=left){
    //         //int total_layer_elements = A*A;
    //       // int t = total_layer_elements;
    //       // while(t--){
    //       //  int temp = grid[top][left];
    //         for(int j = left; j<=right; j++){
    //             grid[top][j] = z;
    //             z++;
    //         }
    //         for(int i = top; i<=bottom; i++){
    //             grid[i][right] = z;
    //             z++;
    //         }
    //         for(int j = right; j>=left; j--){
    //             grid[bottom][j] = z;
    //             z++;
    //         }
    //         for(int i = bottom; i>=top; i--){
    //             grid[i][left] = z;
    //             z++;
    //         }
    //       // grid[top+1][left] = temp;
    //         //}
    //         top++, left++, bottom--, right--;
    //     }
    //     return grid;
    
    
    
     int n=A;
  int t=0,l=0,r=n-1,b=n-1;
    int d=0,count=1;
    vector<vector<int> >a(n,vector<int>(n));
    while(t<=b&&l<=r){
        if(d==0){
            for(int i=l;i<=r;i++){
                a[t][i]=count;
                count++;
            }
            d=1;
            t++;
        }
        else if(d==1){
            for(int i=t;i<=b;i++){
                a[i][r]=count;
                count++;
            }
            d=2;
            r--;
        }
        else if(d==2){
            for(int i=r;i>=l;i--){
                a[b][i]=count;
                count++;
            }
            d=3;
            b--;
        }
        else if(d==3){
            for(int i=b;i>=t;i--){
                a[i][l]=count;
                count++;
            }
            d=0;
            l++;
        }
    }
    return a;
    
    
    
    
}
