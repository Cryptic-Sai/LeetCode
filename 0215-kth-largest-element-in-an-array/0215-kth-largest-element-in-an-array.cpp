class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // int count =0;
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i] >= k){
        //         count ++;
        //     }
        // }
        // return count;
//         priority_queue<int, vector<int>, greater<int>> minHeap;

//     for (int num : nums) {
//         minHeap.push(num);

//         if (minHeap.size() > k) {
//             minHeap.pop();
//         }
//     }

//     return minHeap.top();
// }
//           int count = 0;
//     for (int i = 0; i < nums.size(); i++) {
//         if (nums[i] >= k) {
//             count++;
//         }
//     }
//     return count;
// }
        sort(nums.begin(), nums.end(), greater<int>());
    return nums[k - 1];
}
};