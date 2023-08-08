class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         int target =0;
         sort(nums.begin(), nums.end());
         set<vector<int>> res;
         vector<vector<int>> answer;
        
        for(int i=0; i< nums.size(); i++){
            int j= i+1;
            int k = nums.size()-1;
            while(j<k){
                int sum = nums[i] + nums[j] + nums[k];
                if( sum == target){
                    res.insert({nums[i] , nums [j] , nums[k]});
                    j++;
                    k--;
                }else if(sum < target){
                    j++;
                }else{
                    k--;
                }
            }
        }
        for(auto triplets : res)
            answer.push_back(triplets);
        return answer;
    }
};
