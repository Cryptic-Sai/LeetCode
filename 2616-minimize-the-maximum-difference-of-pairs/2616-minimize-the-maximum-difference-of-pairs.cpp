class Solution {
public:
         
     int newFun(vector<int>& nums, int diff , int p){
        int i=1; 
        int count =0;
        while(i<nums.size()){
        if(nums[i]  - nums[i-1] <= diff){
            i++;
            count ++;
        }
        i++;
     } 
        return count;
     }
    int minimizeMax(vector<int>& nums, int p) {
        sort(nums.begin() , nums.end());
        vector<vector<int>> ans;
        int s=0;
        int e = nums[nums.size() -1] - nums[0];
        while(s<e){
            int mid = s + (e - s)/2;
            if(p <= newFun(nums, mid, p) ){
                e = mid;
            }else{
                s = mid + 1;
            }
        }
        return s;
     }
};