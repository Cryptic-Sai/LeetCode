class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
//         int n = nums.size();
//         int prefix[n];
        
//          prefix[0] = nums[0];
        
//         for(int i=1; i<n; i++){
//             prefix[i] = nums[i] + prefix[i-1];
//         }
//         unordered_map<int,int> mp;
//         int count =0;
//         for(int i=0; i<n; i++){
//             if(prefix[i]==k)
//                 count++;
            
//             if(mp.find(prefix[i] -k) != mp.end())
//             {
//                 count += mp[prefix[i] - k]; 
//             }
            
//             mp[prefix[i]]++;
                
//             }
//         return count;
//         }
    
        int sum =0;
        int count =0;
        map<int, int>mp;
        
        for(int i=0; i< nums.size(); i++){
            sum += nums[i];
            
            if(sum == k){
                count ++;
            }
            if(mp.find(sum -k) != mp.end()){
                count += mp[sum-k];
            }
            mp[sum]++;
        }
        return count;
    
        // int i=0, j=0;
        // int count=0;
        // int sum =0;
        // while(j<nums.size()){
        //     sum +=nums[j];
        //     if(sum == k){
        //         count++;
        //         i++;
        //         j++;
        //     }else{
        //         return -1;
        //     }
        // }
        // return count;
}
};