class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int i =0;
       int maxi =0;  
        for(int i=0; i<s.length(); i++){
            unordered_set<char> res;
            int count =0;
            for(int j = i; j< s.length(); j++){
                if(res.count(s[j] )== 0){
                    res.insert(s[j]);
                    count ++;
                    maxi = max (maxi, count);
                }else{
                    break;
                }                
            }
        }
        return maxi;
    }
};