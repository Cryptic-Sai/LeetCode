class Solution {
public:
    bool isFascinating(int n) {
        string str= to_string(n)+to_string(2*n)+to_string(3*n);
        sort(str.begin(),str.end());
         if(str == "123456789") 
             return true;
        return false;
    }
};
