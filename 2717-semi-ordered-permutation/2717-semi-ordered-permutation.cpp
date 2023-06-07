// class Solution {
// public:
//     int semiOrderedPermutation(vector<int>& nums) {
//         int n = nums.size();
//         int first = index(nums, 1, n);
//         int last = index(nums , n, n);
//         int ans = 0;
//         if(last<first){
//             ans = n - 1 - last + first  -1;
//         }
//         else if(first<last){
//             ans = n - 1 - last + first ; 
//         }
//         return ans;
//     }   
    
//        static int index(vector<int>& nums ,int target ,int n){
//             int index = -1 ;
//             for(int i=0; i<n; i++){
//                 if(nums[i] == target)
//                     index = i;
//                     break;
//             }
//             return index;
//         }
    
// };
class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        int n = nums.size();
        int first = index(nums, 1, n);
        int last = index(nums, n, n);
        int ans =0;
        if(last<first){
            ans = n-1-last+first-1;
        }else if(first<last){
            ans = n-1-last+first;
        }
        return ans;
    }
    static int index(vector<int>& nums, int target, int n){
        int index =-1;
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                index =i;
                break;
            }
        }
        return index;
    }
};