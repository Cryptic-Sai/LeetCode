class Solution {
public:
    int minDifference(vector<int>& nums) {
         sort(nums.begin(), nums.end());
        int n = nums.size();
        // int sm = nums[0];
        // int lr = nums[n-1];
        // // int min = INT_MAX;
        if(n < 5){
             return 0;
         }
        // else{
        //     int max = nums[n-4];
        //     int diff1 = max - sm;
        //     int mini = nums[3];
        //     int diff2 = lr - mini;
        //     int res = min(diff1 , diff2);
        //     return res;
        // }
         return min({nums[n-1] - nums[3],nums[n-4] - nums[0],nums[n-2] - nums[2] ,nums[n-3] - nums[1]});
    }
};