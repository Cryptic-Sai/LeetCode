class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
       int s=0;
       int ans =0;
       int cnt =0;
    //    int n= answerKey.size();

       for(int i=0; i<answerKey.size(); i++){
           if(answerKey[i] == 'F')
           cnt ++;
           while(cnt>k){
               if(answerKey[s] == 'F')
               cnt--;
               s++;
           }
           ans = max(i-s+1, ans);
       }
       cnt =0; s=0;
       for(int i=0; i<answerKey.size(); i++){
           if(answerKey[i] == 'T')
           cnt ++;
           while(cnt>k){
               if(answerKey[s] == 'T')
               cnt--;
               s++;
           }
           ans = max(i-s+1, ans);
       }
       return ans;
    }
};