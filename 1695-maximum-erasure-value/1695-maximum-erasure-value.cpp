class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        long long int ans =0;
        int i = 0, j=0;
        long long int sum =0;
        unordered_set<int> res;
        while(j<nums.size() && i<=j ){
            if(res.find(nums[j]) == res.end()){
                res.insert(nums[j]);
                sum += nums[j];
                ans = max(ans, sum);
                j++;
            }
            else
            {
                res.erase(nums[i]);
                sum -= nums[i];
                i++;
            }
            }
        return ans;
        }
};