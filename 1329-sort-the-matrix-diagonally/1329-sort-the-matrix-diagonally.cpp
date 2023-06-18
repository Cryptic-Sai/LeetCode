// class Solution {
// public:
    // vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
//     int m = mat.size();
//     int n = mat[0].size();
        
//         for(int i=0; i<n; i++){
//             vector<vector<int> ans;
//             for(int j=0; j<m; j++){
//                 if(i+j == m){
//                     break;
//                 }else{
//                     ans.push_back(mat[i+j][j]);
//                 }
//                 sort(mat.begin[i][j] , mat.end[i][j]);
//             }
//         }
//     }
// };
        
        
//         USING of PRORITY QUEUE
//         unordered_map<int, priority_queue<int,vector<int>,greater<int>>> mp;
//         // unordered_map<int, priority_queue<int> vector<int>, greater<int>>mp;
//         int n= mat.size();
//         int m= mat[0].size();
        
//         for(int i=0; i<m; i++){
//             for(int j =0; j<n; j++){
//                 mp[i-j].push(mat[i][j]);
//             }
//         }
//         for(int i=0; i<m; i++){
//             for(int j=0; j<n; j++){
//                 mat[i][j] = mp[i-j].top();
//                 mp[i-j].pop();
//             }
//         }
//         return mat;

class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) 
    {
        unordered_map<int, priority_queue<int,vector<int>,greater<int>>> mp;
        int m = mat.size();
        int n = mat[0].size();
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                mp[i-j].push(mat[i][j]);
            }
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                mat[i][j] = mp[i-j].top();
                mp[i-j].pop();
            }
        }
        return mat;
    }      
};