class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0){
            return false;
        }
        long int one=0, two= sqrt(c);
         while(one<=two){
             long int curr = one*one + two*two;
             if(curr < c){
                 one ++;
             }else if(curr > c){
                 two --;
             }else{
                 return true;
             }
         }
        return false;
    }
};

