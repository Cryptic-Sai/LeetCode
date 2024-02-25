class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() ==0 )
            return 0;
        // int i =0;
        // for(int j =1; j<nums.size(); j++){
        //     int cnt =1;
        //     if(nums[i] == nums[j]){
        //         cnt++;
        //     }
        //     i++;
        //     if(cnt >2){
        //         break;
        //     }
        // }
        // return nums.size();
        
        
//         for(int j =1; j<nums.size(); j++){
//             int cnt =1;
//             if(nums[i] != nums[j]){
//                 i++;
//                 nums[i] = nums[j];
//             }cnt++;
//             if(cnt>2){
//                j++;
//             }
//         }
//         return i+1;
        int i=0;
        for(int j =0; j<nums.size(); j++){
            if(i==0 || i==1 || nums[i-2] != nums[j]){
                nums[i] =  nums[j];
                i++;
             }
        }
        return i;
    }
};
