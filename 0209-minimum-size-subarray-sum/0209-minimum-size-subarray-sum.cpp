class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0, j=0;
        int ans = INT_MAX;
        int sum =0;
        
        while(j<nums.size()){
            if(sum + nums[j] < target){
                sum += nums[j];
                j++;
            }else {
                ans = min(ans, j-i+1);
                sum -= nums[i];
                i++;
            }
            }
        
            if(ans == INT_MAX){
                return 0;
            }
            return ans;
          
       }
};