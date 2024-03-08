class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int>res(2, -1);
        int s =0;
        int e = nums.size()-1;
        while(s<=e){     
            int mid = s + (e-s)/2;
            if(nums[mid] == target){
                res[0] = mid;
                e = mid -1;
            }else if(nums[mid] < target){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        s =0;
        e = nums.size()-1;
        while(s<=e){     
            int mid = s + (e-s)/2;
            if(nums[mid] == target){
                res[1] = mid;
                s = mid+1;
            }else if(nums[mid] < target){
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        return res;
    }
};