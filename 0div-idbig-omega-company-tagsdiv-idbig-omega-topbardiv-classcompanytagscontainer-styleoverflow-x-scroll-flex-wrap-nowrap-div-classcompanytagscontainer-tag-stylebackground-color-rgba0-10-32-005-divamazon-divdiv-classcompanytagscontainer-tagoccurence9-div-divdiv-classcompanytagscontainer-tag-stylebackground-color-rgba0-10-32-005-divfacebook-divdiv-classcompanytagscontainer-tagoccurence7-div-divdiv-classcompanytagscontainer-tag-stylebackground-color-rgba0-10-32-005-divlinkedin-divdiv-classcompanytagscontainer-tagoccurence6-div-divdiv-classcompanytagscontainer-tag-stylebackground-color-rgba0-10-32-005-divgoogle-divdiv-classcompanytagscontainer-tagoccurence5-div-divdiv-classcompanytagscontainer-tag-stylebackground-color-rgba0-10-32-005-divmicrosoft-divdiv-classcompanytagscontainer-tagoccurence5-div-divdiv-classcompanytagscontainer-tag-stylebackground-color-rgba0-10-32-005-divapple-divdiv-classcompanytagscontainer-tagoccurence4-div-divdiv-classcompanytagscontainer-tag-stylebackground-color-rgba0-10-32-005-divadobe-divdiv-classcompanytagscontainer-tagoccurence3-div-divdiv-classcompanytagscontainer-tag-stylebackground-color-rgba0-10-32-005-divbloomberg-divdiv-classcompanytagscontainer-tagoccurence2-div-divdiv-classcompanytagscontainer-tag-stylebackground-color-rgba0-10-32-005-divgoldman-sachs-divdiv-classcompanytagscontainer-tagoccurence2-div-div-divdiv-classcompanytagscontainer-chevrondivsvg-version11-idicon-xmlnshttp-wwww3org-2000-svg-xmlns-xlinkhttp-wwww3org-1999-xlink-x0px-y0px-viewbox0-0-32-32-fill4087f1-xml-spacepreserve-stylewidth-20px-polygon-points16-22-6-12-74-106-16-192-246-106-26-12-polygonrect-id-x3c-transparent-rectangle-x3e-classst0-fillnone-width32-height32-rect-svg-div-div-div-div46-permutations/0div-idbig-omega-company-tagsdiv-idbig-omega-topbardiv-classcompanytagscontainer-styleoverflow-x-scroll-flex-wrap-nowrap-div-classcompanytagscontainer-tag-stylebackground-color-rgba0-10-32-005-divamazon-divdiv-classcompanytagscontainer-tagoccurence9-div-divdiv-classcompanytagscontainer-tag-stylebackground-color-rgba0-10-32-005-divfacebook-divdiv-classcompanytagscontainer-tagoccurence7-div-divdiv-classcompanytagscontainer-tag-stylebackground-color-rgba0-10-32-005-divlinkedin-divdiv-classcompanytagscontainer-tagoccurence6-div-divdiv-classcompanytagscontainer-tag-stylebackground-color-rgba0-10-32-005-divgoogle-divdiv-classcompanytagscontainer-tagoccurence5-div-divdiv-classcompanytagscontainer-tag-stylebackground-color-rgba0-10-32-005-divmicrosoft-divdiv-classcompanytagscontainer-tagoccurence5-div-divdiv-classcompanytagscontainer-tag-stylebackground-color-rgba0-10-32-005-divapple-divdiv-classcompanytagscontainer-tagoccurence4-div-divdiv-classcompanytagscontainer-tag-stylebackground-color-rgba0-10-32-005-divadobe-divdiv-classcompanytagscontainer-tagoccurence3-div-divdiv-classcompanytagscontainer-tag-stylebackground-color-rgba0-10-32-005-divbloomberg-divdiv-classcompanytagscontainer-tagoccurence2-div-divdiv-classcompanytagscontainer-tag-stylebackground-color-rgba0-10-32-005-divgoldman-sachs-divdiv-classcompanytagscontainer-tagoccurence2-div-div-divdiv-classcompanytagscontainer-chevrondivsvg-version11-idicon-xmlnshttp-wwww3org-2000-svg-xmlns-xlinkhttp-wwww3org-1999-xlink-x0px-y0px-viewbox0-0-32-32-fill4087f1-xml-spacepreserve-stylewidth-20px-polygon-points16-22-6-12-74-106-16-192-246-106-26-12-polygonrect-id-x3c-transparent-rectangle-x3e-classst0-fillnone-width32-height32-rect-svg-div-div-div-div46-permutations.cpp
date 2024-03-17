class Solution {
    private:
        void solve(vector<int> &num, vector<vector<int>> &ans, int index){
//             base case
            if(index >= num.size()){
                ans.push_back(num);
                return;
            }
            
            for(int j = index; j<num.size(); j++){
                swap(num[index], num[j]);
                solve(num, ans, index+1);
//                 backtracking
                swap(num[index], num[j]);
            }
        }
public:
    vector<vector<int>>permute(vector<int> &num) {
	    vector<vector<int>> ans;
        int index = 0;
        solve(num, ans, index);
        return ans;
    }
};