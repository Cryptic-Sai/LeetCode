class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
        int res = solve(nums, k);
        reverse(nums.begin(), nums.end());
        return max(res, solve(nums, nums.size() - k - 1));
    }
    
    int solve(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> left(k, 0);
        int mini = INT_MAX;
        for (int i = k - 1; i >= 0; i--) {
            mini = min(mini, nums[i]);
            left[i] = mini;
        }
        
        vector<int> right;
        mini = INT_MAX;
        for (int i = k; i < n; i++) {
            mini = min(mini, nums[i]);
            right.push_back(mini);
        }
        
        int ans = 0;
        for (int j = 0; j < right.size(); j++) {
            mini = right[j];
            int i = lower_bound(left.begin(), left.end(), mini) - left.begin();
            int size = (k + j) - i + 1;
            ans = max(ans, mini * size);
        }
        
        return ans;
    }
};