class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0,j=0;     
        int odd=0, ans=0, count =0;
        
        while(j<n)
        {
            if(nums[j] %2 !=0)
            {
                odd++;
                count =0;
            }
            while(odd == k)
            {
                ++count;
                odd -= nums[i++]&1;
            }
            ans += count;
            j++;
        }
        return ans;
    }
};
// class Solution {
// public:
//     int numberOfSubarrays(vector<int>& nums, int k) {
//         int n = nums.size();
//         int ans = 0,odd = 0,cnt = 0;
//         int l = 0,r = 0;
//         while(r<n)
//         {
//             if(nums[r]%2 != 0)
//             {
//                 odd++;
//                 cnt = 0;
//             }
//             while(odd == k)
//             {
//                 cnt++;
//                 odd -= nums[l++]&1; 
//             }
//             ans += cnt;
//             r++;
//         }
//         return ans;
//     }
// };