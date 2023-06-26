class Solution {
public:
    int countGoodSubstrings(string s) {
        int i=0;
        int j=0;
        int count =0;
        while(j<s.size()){
            if(j-i+ 1<3){
                j++;
            }else if(j-i+1 == 3){
                unordered_set<char> uniqueChars;
                bool isGood = true;
                for (int k = i; k <= j; k++) {
                    if (uniqueChars.find(s[k]) != uniqueChars.end()) {
                        isGood = false;
                        break;
                    }
                    uniqueChars.insert(s[k]);
                }
                if (isGood) {
                    count++;
                }
                i++;
                j++;
            }
        }
        return count;
    }
};
// class Solution {
// public:
//     int countGoodSubstrings(string s) {
//         int i = 0;
//         int j = 0;
//         int count = 0;
//         while (j < s.size()) {
//             if (j - i + 1 < 3) {
//                 j++;
//             } else if (j - i + 1 == 3) {
//                 // Check if the substring has all unique characters
//                 unordered_set<char> uniqueChars;
//                 bool isGood = true;
//                 for (int k = i; k <= j; k++) {
//                     if (uniqueChars.find(s[k]) != uniqueChars.end()) {
//                         isGood = false;
//                         break;
//                     }
//                     uniqueChars.insert(s[k]);
//                 }
//                 if (isGood) {
//                     count++;
//                 }
//                 i++; // Update the start index of the substring
//                 j++; // Move the window to the right
//             }
//         }
//         return count;
//     }
// };

