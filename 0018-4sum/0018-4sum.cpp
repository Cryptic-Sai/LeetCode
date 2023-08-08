class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        sort(nums.begin() , nums.end());
        set<vector<int>> res;
        vector<vector<int>> answer;
        
        for(int i=0; i< nums.size()-1; i++){
            for(int j = i+1; j< nums.size()-1; j++){
                int l = j+1;
                int k = nums.size()-1;
                while(l<k){
                    long long sum = static_cast<long long>(nums[i]) + nums[j] + nums[k] + nums[l];
                    if(sum == target){
                        res.insert({nums[i] ,nums[j], nums[l], nums[k]});
                        l++;
                        k--;
                    }else if (sum< target){
                        l++;
                    }else{
                        k--;
                    }
                }
            }
        }
        for(auto quadruplets : res)
            answer.push_back(quadruplets);
        return answer;
    }
};