class Solution {
public:

    int majorityElement(vector<int>& nums) {
//         return majority(nums, 0, nums.size() - 1);
//     }
// private:
//     int majority(vector<int>& nums, int l, int r) {
//         if (l == r) {
//             return nums[l];
//         }
//         int m = l + (r - l) / 2, lm = majority(nums, l, m), rm = majority(nums, m + 1, r);
//         if (lm == rm) {
//             return lm;
//         }
//         return count(nums.begin() + l, nums.begin() + r + 1, lm) > count(nums.begin() + l, nums.begin() + r + 1, rm) ? lm : rm;
//     }
// };    
//    

//         Mooves voting algorthm
        
//         int count =0;
//         int element ;
        
//         for(int i =0; i<nums.size(); i++){
//             if(count ==0){
//                 element =nums[i];
//                 count =1;
//             }
//             else if(nums[i] == element){
//                 count ++;
//             }
//             else{
//                 count --;
//             }
//         }
        
//         int count1 =0;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i] == element) count1 ++;
            
//         } 
//         if(count1 > (nums.size() / 2)){
//             return element;
//         }
//         return -1;
        
        int cnt =0;
        int add;
        for(int i=0; i<nums.size(); i++){
            if(cnt ==0){
              add = nums[i];
                cnt++;
            }else if(nums[i] == add){
                cnt++;
            }
            else{
                cnt --;
            }
        }
        int cnt1 =0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == add) cnt1 ++;
        if(cnt1>nums.size()/2){
            return add;
        }
        
    }
        return -1;
}
};