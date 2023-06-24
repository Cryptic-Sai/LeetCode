// Three Pointers
// Dutch national Flag Algorithm

class Solution {
public:
    void sortColors(vector<int>& nums) {
//         int low = 0;
//         int high = nums.size()-1;
//         int mid = 0;

//         // Moving till all elements are sorted.
//         while(mid <= high) {
//             switch (nums[mid]) {

//         case 0:
//             swap(nums[low++], nums[mid++]);
//             break;

//         case 1:
//             mid++;
//             break;

//         case 2:
//             swap(nums[mid], nums[high--]);
//             break;
        
//             }
//         }
//         int l=0;
//         int h = nums.size()-1;
//         int m = 0;
        
//         while(m<=h){
//             switch(nums[m]){
                    
//                 case 0:
//                     swap(nums[l++] , nums[m++]);
//                     break;
//                 case 1:
//                     m++;
//                     break;
                    
//                 case 2:
//                     swap(nums[m] , nums[h--]);
//                     break;
                                        
//             }
//         }
        
        sort(nums.begin(), nums.end());
    }
};