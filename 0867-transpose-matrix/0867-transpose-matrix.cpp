class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        // int n=matrix.size();
        // int m=matrix[0].size();

        // for(int i=0; i<=n; i++){
        //     for(int j=0; j<=m; j++){
        //         if(i==j){
        //             return matrix[i][j];
        //         }
        //         else{
        //             swap(matrix[i][j] , matrix[i+1][j-1]);
        //         }
        //     }
        // }
        // return 
        int M = A.size(), N = A[0].size();
        vector<vector<int>> B(N, vector<int>(M, 0));
        for (int j = 0; j < N; j++)
            for (int i = 0; i < M; i++)
                B[j][i] = A[i][j];
        return B;
    }

    
};