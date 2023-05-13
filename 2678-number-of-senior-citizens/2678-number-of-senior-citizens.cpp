class Solution {
public:
    int countSeniors(vector<string>& details) {
    //     int ans =0;
    //     int i =0;
    //     int count =0;
    //     int j =0;
    //     int ans[i][j] = details[i][11]*10 + details[i][12];
    //     if(ans >=60){
    //         return count;
    //     }
    //     else{
    //         count ++;
    //     }
    // }
        
    int ans = 0;
        for(auto e: details){
            int age = (e[11] - '0') * 10 + (e[12] - '0');
            if(age > 60) ans++;
        }
        return ans;
}
};