// class Solution {
// public:
//     int maximumUniqueSubarray(vector<int>& nums) {
//         int ans =0;
//         for(int i=0; i<nums.size(); i++){
//             unordered_set< int> res;
//             vector<int>sum;
//             for(int j=i; j<nums.size(); j++){
//                 if(res.count(nums[j] == 0)){
//                     res.insert(nums[j]);
//                     sum += res;
//                     ans = max(ans, sum);
//                 }else{
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int ans = 0;
        int i = 0, j = 0;
        int currentSum = 0;
        unordered_set<int> uniqueElements;

        while (j < nums.size()) {
            if (uniqueElements.count(nums[j]) == 0) {
                uniqueElements.insert(nums[j]);
                currentSum += nums[j];
                ans = max(ans, currentSum);
                j++;
            } else {
                uniqueElements.erase(nums[i]);
                currentSum -= nums[i];
                i++;
            }
        }
        
        return ans;
    }
};
