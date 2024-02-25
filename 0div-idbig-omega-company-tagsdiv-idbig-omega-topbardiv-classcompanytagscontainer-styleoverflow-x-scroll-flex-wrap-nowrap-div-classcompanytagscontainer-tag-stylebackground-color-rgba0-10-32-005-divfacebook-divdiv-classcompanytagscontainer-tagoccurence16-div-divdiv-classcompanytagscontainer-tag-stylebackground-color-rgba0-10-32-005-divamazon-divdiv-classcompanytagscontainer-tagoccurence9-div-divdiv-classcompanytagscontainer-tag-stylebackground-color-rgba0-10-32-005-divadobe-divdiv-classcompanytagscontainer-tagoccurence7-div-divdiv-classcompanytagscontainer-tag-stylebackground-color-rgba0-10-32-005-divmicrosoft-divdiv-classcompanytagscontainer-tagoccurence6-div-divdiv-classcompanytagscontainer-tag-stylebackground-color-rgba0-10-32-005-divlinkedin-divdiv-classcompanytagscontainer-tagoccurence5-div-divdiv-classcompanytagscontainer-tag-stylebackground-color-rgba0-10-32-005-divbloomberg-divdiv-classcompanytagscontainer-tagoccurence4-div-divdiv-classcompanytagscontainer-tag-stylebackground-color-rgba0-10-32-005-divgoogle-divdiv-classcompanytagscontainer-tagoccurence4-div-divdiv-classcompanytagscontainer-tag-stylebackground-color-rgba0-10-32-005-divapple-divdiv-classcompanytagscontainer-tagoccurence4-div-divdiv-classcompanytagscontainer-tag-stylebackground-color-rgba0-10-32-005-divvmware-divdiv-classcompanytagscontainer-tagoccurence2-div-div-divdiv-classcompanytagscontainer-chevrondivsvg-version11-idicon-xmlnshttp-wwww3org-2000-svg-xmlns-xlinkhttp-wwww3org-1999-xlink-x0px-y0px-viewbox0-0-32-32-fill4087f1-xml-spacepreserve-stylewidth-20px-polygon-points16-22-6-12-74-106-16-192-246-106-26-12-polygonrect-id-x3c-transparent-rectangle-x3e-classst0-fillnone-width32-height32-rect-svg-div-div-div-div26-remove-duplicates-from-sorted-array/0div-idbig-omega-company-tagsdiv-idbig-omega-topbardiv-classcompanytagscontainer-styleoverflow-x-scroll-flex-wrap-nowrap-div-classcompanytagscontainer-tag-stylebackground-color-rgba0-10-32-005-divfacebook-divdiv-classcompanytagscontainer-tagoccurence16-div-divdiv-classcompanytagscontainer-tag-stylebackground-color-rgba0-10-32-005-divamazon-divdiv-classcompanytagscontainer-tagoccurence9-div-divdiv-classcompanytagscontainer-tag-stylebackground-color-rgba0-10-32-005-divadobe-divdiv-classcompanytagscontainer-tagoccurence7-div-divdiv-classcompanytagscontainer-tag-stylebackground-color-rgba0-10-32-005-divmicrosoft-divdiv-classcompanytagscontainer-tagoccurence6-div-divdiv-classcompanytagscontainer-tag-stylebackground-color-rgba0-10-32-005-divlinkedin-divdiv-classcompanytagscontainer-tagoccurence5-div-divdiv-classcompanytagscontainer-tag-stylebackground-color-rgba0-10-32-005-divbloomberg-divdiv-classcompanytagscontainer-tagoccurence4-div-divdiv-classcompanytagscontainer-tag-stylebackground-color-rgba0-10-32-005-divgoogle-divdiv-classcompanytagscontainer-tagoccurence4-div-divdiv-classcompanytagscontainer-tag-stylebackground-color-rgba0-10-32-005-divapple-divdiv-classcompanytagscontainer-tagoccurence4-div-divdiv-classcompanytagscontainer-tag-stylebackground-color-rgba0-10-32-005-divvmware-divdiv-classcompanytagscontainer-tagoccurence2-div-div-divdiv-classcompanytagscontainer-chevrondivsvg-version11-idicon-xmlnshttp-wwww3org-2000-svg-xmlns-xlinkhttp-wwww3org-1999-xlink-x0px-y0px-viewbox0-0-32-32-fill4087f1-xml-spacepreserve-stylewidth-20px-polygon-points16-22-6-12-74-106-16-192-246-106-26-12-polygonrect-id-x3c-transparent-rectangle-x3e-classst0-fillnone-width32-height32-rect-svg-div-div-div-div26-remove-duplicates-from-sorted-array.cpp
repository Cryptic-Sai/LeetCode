class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // map<int, int> mp;
        // int k =0;
        // for(int i=0; i<nums.size(); i++){
        //    if(!mp[nums[i]]){
        //        nums[k++] = nums[i];
        //        mp[nums[i]] = true;
        //    }
        // }
        // return k;
        
        // int j =1;
        // for(int i =1; i<nums.size(); i++){
        //     if(nums[i] != nums[i-1]){
        //         nums[j] = nums[i];
        //         j++;
        //     }
        // }
        //    return j;
        
        if(nums.size() == 0)
            return 0;
        
        int i = 0;
        for(int j =1; j<nums.size(); j++){
            if(nums[i] != nums[j])
                i++;
            nums[i] = nums[j];
        }
        return i+1;
    }
};