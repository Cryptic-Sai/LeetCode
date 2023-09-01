class Solution {
public:
    int count(int n){
        int count =0;
        while(n>0){
            count++;
            n = n & (n-1);
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>res(n+1,0);
        for(int i=0; i<=n; i++){
            res[i] = count(i);
        }
        return res;
    }
};