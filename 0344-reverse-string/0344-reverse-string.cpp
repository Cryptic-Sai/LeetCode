#include<string>
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:

    void reverseString(vector<char>& s) {
//         int str = 0;
//         int e = s.size()-1;

//         while (str<e){
//             swap(s[str++], s[e--]);

//         }
        int start =0;
        int end = s.size() -1;
        
        while(start<end){
            swap(s[start++], s[end--]);
        }
        
       }

};

