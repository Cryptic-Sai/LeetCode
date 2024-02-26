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
        int low =0;
        int mid =0;
        int high = nums.size()-1;
        int temp =0;
        
        while(mid<= high){
            if(nums[mid] == 0){
                // temp = nums[low];
                // nums[low] = nums[mid];
                // nums[mid] = temp;
                swap(nums[mid], nums[low]);
                mid++;
                low++;
            }else if(nums[mid] == 1){
                mid++;
            }
            else if(nums[mid] == 2){
                // temp = nums[high];
                // nums[high] = nums[mid];
                // nums[mid] = temp;
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};