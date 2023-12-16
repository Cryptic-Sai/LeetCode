class Solution {
public:
    bool isAnagram(string s, string t) {
//         map<char,int> mp;
//         for(auto i:s){
//             mp[i]++;
//         }

//         for(auto i:t){
//             mp[i]--;
//         }

//         for(auto i:mp){
//             if(i.second != 0){
//                 return false;
//             }
//         }
//         return true;
        
        if(s.length() != t.length()){
            return false;
        }
        
        sort(s.begin() , s.end());
        sort(t.begin(),  t.end());
        if(s == t){
            return true;
        }
        return false;
    }
};