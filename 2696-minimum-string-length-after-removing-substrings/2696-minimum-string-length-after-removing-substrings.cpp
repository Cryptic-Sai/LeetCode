class Solution {
public:
    int minLength(string s) {
        stack<char> stac;
        
        for(int i=0; i<s.length(); i++){
            if(stac.empty()){
                stac.push(s[i]);
            }
            else if(stac.top() == 'A' && s[i] == 'B'){
                stac.pop();
            }
            else if(stac.top() == 'C' && s[i] == 'D'){
                stac.pop();
            }
            else{
                stac.push(s[i]);
            }
        }
        return stac.size();
    }
};