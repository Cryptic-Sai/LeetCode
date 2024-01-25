class Solution {
public:
    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        int z = s.size();
        vector<int> res(z,0);
        
        for(int i=0; i<z;i++){         
            int cnt=0;
            int x = startPos[0], y = startPos[1];
            for(int j = i; j<z; j++){
                if(s[j] == 'L'){
                        y--;
                    }
                else if(s[j] == 'R'){
                        y++;
                }
                else if(s[j] == 'U'){
                        x--;
                }
                else{
                    x++;
                }
                
                if (x>=0 && x<n && y>=0 && y<n){
                    cnt++;
                }
                else{
                    break;
                }
                
            res[i] = cnt;
            }
        }
        return res;
    } 
};