class Solution {
public:
    int reductionOperations(vector<int>& nums) {
    // map<int,int> mp;
    // int n = nums.size();
    sort(nums.begin(), nums.end());
    int ans =0;
    int j =0;
    for(int i=1; i<nums.size(); i++){
        if(nums[i] != nums[i-1]){
            j++;
        }
        
            ans +=j;
        
    }return ans;
    
}
};