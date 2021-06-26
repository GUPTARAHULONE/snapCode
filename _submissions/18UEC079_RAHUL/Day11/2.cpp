#define MOD 1000000007

vector<vector<long long>> ones = {{1,1},{1,0}};

void mul(vector<vector<long long>>& mat1, vector<vector<long long>>& mat2){
    vector<vector<long long>> temp = {{0,0},{0,0}};
    temp[0][0]=((mat1[0][0]*mat2[0][0])%MOD + (mat1[0][1]*mat2[1][0])%MOD)%MOD;
    temp[0][1]=((mat1[0][0]*mat2[0][1])%MOD + (mat1[0][1]*mat2[1][1])%MOD)%MOD;
    temp[1][0]=((mat1[1][0]*mat2[0][0])%MOD + (mat1[1][1]*mat2[1][0])%MOD)%MOD;
    temp[1][1]=((mat1[1][0]*mat2[0][1])%MOD + (mat1[1][1]*mat2[1][1])%MOD)%MOD;
    mat1 = temp;
}

void matrixExpo(vector<vector<long long>>& mat, long long power){
    if(power<=1) return;
    matrixExpo(mat,power>>1);
    mul(mat,mat);
    if(power&1) mul(mat,ones);
}

int Solution::solve(int A) {
    vector<vector<long long>> mat = ones;
    matrixExpo(mat,A-1);
    return mat[0][0]%MOD;
}
