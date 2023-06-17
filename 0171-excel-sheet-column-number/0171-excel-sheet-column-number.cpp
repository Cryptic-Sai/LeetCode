class Solution {
public:
    int titleToNumber(string c) {
        int result = 0;
        for(auto i : c){
            int d = i - 'A' + 1;
            result = result * 26 + d;
        }
        return result;
    }
};