class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
       sort(nums.begin() , nums.end());
       int count = 1 , j = 0;
       for(int i =0; i<nums.size()-1 ; i++){
           if(nums[i] == nums [i+1])
           count++;
           else{
            j = j + count*(count-1)/2;
               count  = 1;
           }
       }
       j = j+ count *(count-1)/2;
       return j;

    }
};