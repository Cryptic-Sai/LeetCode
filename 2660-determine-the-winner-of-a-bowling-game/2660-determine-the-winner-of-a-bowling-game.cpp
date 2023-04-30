// class Solution {
// public:
//     int isWinner(vector<int>& player1, vector<int>& player2) {
        
//         int p1 =0;
//         int p2 =0;
//         sum += p1[i];
//         if(p1>p2){
//             return 1;
//         }else if{
//             return 2;
//         }else{
//             p1=p2
//                 return 0;
//         }
//     }
// };

class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        
        map<int,int> mp;
        int cnt1 = 0 , cnt2 = 0;
        for(int i=0; i<player1.size(); i++){
            
            if(i == 0){
                cnt1 += player1[i];
            }
            else if(i==1){
                if(player1[i-1] == 10){
                    cnt1 += 2*player1[i];
                }
                else{
                    cnt1 += player1[i];
                }
            }
            if(i > 1){
                if(player1[i-1] == 10){
                    cnt1 += 2*player1[i];
                }
                else if(player1[i-2] == 10){
                    cnt1 += 2*player1[i];
                }
                else{
                    cnt1 += player1[i];
                }
            }
            
            if(i == 0){
                cnt2 += player2[i];
            }
            else if(i==1){
                if(player2[i-1] == 10){
                    cnt2 += 2*player2[i];
                }
                else{
                    cnt2 += player2[i];
                }
            }
            if(i > 1){
                if(player2[i-1] == 10){
                    cnt2 += 2*player2[i];
                }
                else if(player2[i-2] == 10){
                    cnt2 += 2*player2[i];
                }
                else{
                    cnt2 += player2[i];
                }
            }
            
        }
        cout<<cnt1<<":"<<cnt2<<endl;
        
        if(cnt1 < cnt2){ return 2;}
        else if(cnt1 > cnt2){ return 1;}
        return 0;
    }
};