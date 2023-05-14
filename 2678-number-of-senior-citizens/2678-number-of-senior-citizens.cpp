class Solution {
public:
    int countSeniors(vector<string>& details) {
        int result = 0;
        for(auto e: details){
            int age = (e[11] - '0') * 10 + (e[12] - '0');
            if(age > 60) result++;
        }
        return result;
    }
};