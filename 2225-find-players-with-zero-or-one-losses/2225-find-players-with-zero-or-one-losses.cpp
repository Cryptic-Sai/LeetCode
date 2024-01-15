class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> lost_mp;
        for(int i=0; i<matches.size(); i++){
            int loser = matches[i][1];
            lost_mp[loser]++;
        }
        
        vector<int>not_lost;
        vector<int>lost_one;
        
        for(int i=0; i<matches.size(); i++){
            int winner = matches[i][0];
            int loser = matches[i][1];
            
            
            if(lost_mp.find(winner) == lost_mp.end()){
                not_lost.push_back(winner);
                lost_mp[winner] =2;
            }
            
            if(lost_mp[loser] == 1){
                lost_one.push_back(loser);
            }
        }
        
        sort(not_lost.begin(), not_lost.end());
        sort(lost_one.begin(), lost_one.end());
        return{not_lost, lost_one};
    }
};