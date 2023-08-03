// class Solution {
// public:
//     bool searchMatrix(vector<vector<int>>& matrix, int target) {
//         // if(!matrix.size()) return false;
        
//        int m = matrix.size();
//        int n = matrix[0].size();
        
//         int s =0;
//         int e = (m*n -1);
//         while(s<e){
//             int mid = s + (e-s)/2;
//             if(matrix[mid/n][mid%n] == target){
//                 return true;
//             }else if(matrix[mid/n][mid%n] < target){
//                 s = mid+1;
//             }else{
//                 e = mid-1;
//             } 
//         }
//          return false;
//     }
// };
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = m ? matrix[0].size() : 0, r = 0, c = n - 1;
        while (r < m && c >= 0) {
            if (matrix[r][c] == target) {
                return true;
            }
            matrix[r][c] > target ? c-- : r++;
        }
        return false;
    }
};