class Solution {
public:
    int maxVowels(string nums, int k) {
        int i=0, j=0;
        int ans=0;
        int count =0;
        while(j<nums.length()){
            if(j-i == k){
               if(nums[i] == 'a' || nums[i] == 'e' || nums[i] == 'i' || nums[i] == 'o' || nums[i] == 'u' ){
                   count--;
               }
               i++;
            } 
            if(nums[j] == 'a' || nums[j] == 'e' || nums[j] == 'i' || nums[j] == 'o' || nums[j] == 'u' ){
               count++;
            }
            j++;
            ans = max(count, ans);     
    }
        return ans;
}
};