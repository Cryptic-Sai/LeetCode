class Solution {
public:
    void solve(int idx, vector<int> &nums, int k, vector<int> &res, int & answ){
        if(idx == nums.size()){
            int maxi = INT_MIN;
            for(int x=0; x<k; x++){
                maxi = max(res[x], maxi);
            }
            
            answ = min(answ, maxi);
            return ;
        }
        
        for(int i=0; i<k; i++){
            res[i] += nums[idx];
            solve(idx+1, nums, k , res, answ);
            res[i] -= nums[idx];
        }
        
    }
    
    int distributeCookies(vector<int>& cookies, int k) {
        int answ = INT_MAX;
        vector<int> res(k,0);
        solve(0, cookies, k, res, answ);
        return answ;
    }
};