class Solution {
public:
    // bool find132pattern(vector<int>& nums) {
    //     stack<int> st;
    //     for(int i=0; i<nums.size(); i++){
    //         int j = i+1;
    //         int k = j+1;
    //         if(nums[i] < nums[j] && nums[j] > nums[k]){
    //             // st.push(nums[i]);
    //             return true;
    //         }
    //     }
    //     return false;
    bool find132pattern(vector<int>& nums) {
        int s3 = INT_MIN;
        stack<int> st;
        for( int i = nums.size()-1; i >= 0; i -- ){
            if( nums[i] < s3 ) return true;
            else while( !st.empty() && nums[i] > st.top() ){ 
              s3 = st.top(); st.pop(); 
            }
            st.push(nums[i]);
        }
        return false;
    }
};