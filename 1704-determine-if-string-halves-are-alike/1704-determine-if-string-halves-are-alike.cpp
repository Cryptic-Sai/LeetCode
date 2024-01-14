class Solution {
public:
    bool halvesAreAlike(std::string s) {
        int n = s.length();
        if (n % 2 != 0) {
            return false;
        }
        int cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < n / 2; i++) {
            char a = tolower(s[i]);
            if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u') {
                cnt1++;
            }
        }

        for (int j = n / 2; j < n; j++) {
            char b = tolower(s[j]);
            if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u') {
                cnt2++;
            }
        }

        return cnt1 == cnt2;
    }
};
