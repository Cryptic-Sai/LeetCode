class Solution {
public:
    string reverseStr(string s, int k) {
    
        // int i = 0, n = s.length();
        // while(i<n) {
        //     int j = min(i+k-1, n-1);
        //     int nexti = j+k+1;
        //     while(i<j) swap(s[i++], s[j--]);
        //     i = nexti;
        // }
        // return s;
        
        int l =0;
        int e = min(k , (int)s.length());
        
        while(l< s.length()){
            reverse(s.begin() + l, s.begin() +e );
            l += 2*k;
            e = min(l+k , (int)s.length());
        }
        return s;
    }
    
};