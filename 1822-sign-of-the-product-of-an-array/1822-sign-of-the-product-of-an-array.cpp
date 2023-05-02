class Solution {
public:
    int arraySign(vector<int>& nums) {
    int ans=1;
    for(int i=0 ; i<nums.size();i++)
    {
        if(nums[i]==0)return 0;
        ans= ans*nums[i]/abs(nums[i]);
    }
    return ans;
        
    // int signFunc(x) =0;
    // if(x>0){
    //     return 1;
    // }else if(x<0)
    //         return -1;       
    // else{
    //     return 0;
    // }
        
//         int ans =1;
//         for(int i=0; i<nums.size(); i++){
//             if(nums[i] == 0){
//                 return 0;
                
//                 ans = ans*nums[i]/abs(nums[i]);
//             }
//             else if (nums[i] >0){
//                 return 1;
//             }
//             else{
//                 return -1;
//             }
                
            
            
//         }return ans;
}
};