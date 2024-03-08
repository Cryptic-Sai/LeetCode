class Solution {
public:
    vector<int> platesBetweenCandles(string s, vector<vector<int>>& queries) {
        vector<int> barIndex;
        int i=0;
        for(auto ch : s){
            if(ch == '|') barIndex.push_back(i);
            i++;
        }
        vector<int> ans;
        for(auto it: queries){
            int l = it[0];
            int r = it[1];
            
            int i = lower_bound(barIndex.begin(), barIndex.end(), l) - barIndex.begin();
            int j = upper_bound(barIndex.begin(), barIndex.end(), r) - barIndex.begin() - 1;
            
            if( j<= i) ans.push_back(0);
            else ans.push_back(barIndex[j] - barIndex[i] - (j-i));
        }
        return ans;
    }
};