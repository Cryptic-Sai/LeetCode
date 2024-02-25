class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        int k =0;
        for(int i=0; i<nums.size(); i++){
           if(!mp[nums[i]]){
               nums[k++] = nums[i];
               mp[nums[i]] = true;
           }
        }
        return k;
    }
};