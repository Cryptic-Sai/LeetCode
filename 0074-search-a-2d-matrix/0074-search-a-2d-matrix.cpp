class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if(!matrix.size()) return false;

      int m = matrix.size();
      int n  = matrix[0].size();

//     int low = 0;
//     int high = (m*n -1);

//     while(low<=high){
//         int mid = low +(high - low) /2;
//         if(matrix[mid/n][mid % n] == target){
//             return true;
//         }
//         else if(matrix[mid/n][mid % n] < target){
//             low = mid+1;
//         }  
//         else{
//             high = mid-1;
//         }  

//     }
//     return false;
        
        int l =0;
        int h = (m*n -1);
        while( l<= h){
            int mid = l + (h - l)/2;
//             Index of imaginary mid will be
            if(matrix[mid/n][mid%n] == target){
                return true;
            }else if(matrix[mid/n][mid%n] < target){
                l = mid +1;
            }else{
                h =mid -1;
            }
        }
        return false;
  }
};