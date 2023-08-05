class Solution {
public:
    int findGCD(vector<int>& nums) {
//         int gcd =0;
//         int max = *maxelement(nums.begin() , nums.end());
//         int min = *minelement(nums.begin() , nums.end());
        
//         for(int i=0; i<nums; i+= && gcd<i)
//     }
        return gcd(*min_element(begin(nums) ,end(nums)) ,*max_element(begin(nums), end(nums)));
           
    }
};