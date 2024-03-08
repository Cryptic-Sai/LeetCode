// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
        
//         vector<int>res(2, -1);
//         int s =0;
//         int e = nums.size()-1;
//         while(s<=e){     
//             int mid = s + (e-s)/2;
//             if(nums[mid] == target){
//                 res[0] = mid;
//                 e = mid -1;
//             }if(nums[mid] < target){
//                 s = mid+1;
//             }else{
//                 e = mid-1;
//             }
//         }
//         s =0;
//         e = nums.size()-1;
//         while(s<=e){     
//             int mid = s + (e-s)/2;
//             if(nums[mid] == target){
//                 res[1] = mid;
//                 s = mid+1;
//             }if(nums[mid] < target){
//                 s = mid+1;
//             }else{
//                 e = mid-1;
//             }
//         }
//         return res;
//     }
// };
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1); // Initializing result vector with -1

        // Finding the leftmost index of the target
        int left = 0, right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                result[0] = mid; // Update leftmost index
                right = mid - 1; // Continue searching towards left for the leftmost occurrence
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        // Finding the rightmost index of the target
        left = 0, right = nums.size() - 1; // Resetting left and right pointers
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                result[1] = mid; // Update rightmost index
                left = mid + 1; // Continue searching towards right for the rightmost occurrence
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    }
};
