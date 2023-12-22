class Solution {
public:
    int maxScore(string s) {
        int maxcnt =0;
        int cnt_l =0;
        int cnt_r = count(s.begin(), s.end(), '1');
        for(int i=0; i< s.length()-1; ++i){
            cnt_l += (s[i] == '0');
            cnt_r -= (s[i] == '1');
            
            maxcnt = max(maxcnt, cnt_l + cnt_r );
        }
        return maxcnt;
    }
};


