class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        
        // for(int i=0; i<n; i++){
        //     if(nums[i] == n-1){
        //         return true;
        //     }
        //     int k =0;
        //      if(nums[i] != k){
        //          nums[i] = nums[i+k];
        //      }
        // }
       
        int n = nums.size();
        if(n == 0){
            return true;
            }
        int cnt =0;
        for(int i=n-2; i>=0; i--){
            cnt++;
            if(nums[i] >= cnt){
                cnt = 0;
            }
        }
        if(cnt == 0)
                return true;
            else
                return false;
    }
};
