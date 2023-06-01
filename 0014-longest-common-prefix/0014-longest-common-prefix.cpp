// class Solution {
// public:
//     string longestCommonPrefix(vector<string>& strs) {
//         map<char ,string >m1;
        
//         for(int i=0; i<strs.size(); i++){
//             for(int j=0; j<strs[i].size(); j++){
//                 m1[strs[i][j]]++;
//             }
//         }
//     }
// };

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int a=strs.size();
        string n=strs[0],m=strs[a-1],ans="";
        for(int i=0;i<n.size();i++){
            if(n[i]==m[i]){ans+=n[i];}
            else break;
        }
        return ans;
        
    }
};