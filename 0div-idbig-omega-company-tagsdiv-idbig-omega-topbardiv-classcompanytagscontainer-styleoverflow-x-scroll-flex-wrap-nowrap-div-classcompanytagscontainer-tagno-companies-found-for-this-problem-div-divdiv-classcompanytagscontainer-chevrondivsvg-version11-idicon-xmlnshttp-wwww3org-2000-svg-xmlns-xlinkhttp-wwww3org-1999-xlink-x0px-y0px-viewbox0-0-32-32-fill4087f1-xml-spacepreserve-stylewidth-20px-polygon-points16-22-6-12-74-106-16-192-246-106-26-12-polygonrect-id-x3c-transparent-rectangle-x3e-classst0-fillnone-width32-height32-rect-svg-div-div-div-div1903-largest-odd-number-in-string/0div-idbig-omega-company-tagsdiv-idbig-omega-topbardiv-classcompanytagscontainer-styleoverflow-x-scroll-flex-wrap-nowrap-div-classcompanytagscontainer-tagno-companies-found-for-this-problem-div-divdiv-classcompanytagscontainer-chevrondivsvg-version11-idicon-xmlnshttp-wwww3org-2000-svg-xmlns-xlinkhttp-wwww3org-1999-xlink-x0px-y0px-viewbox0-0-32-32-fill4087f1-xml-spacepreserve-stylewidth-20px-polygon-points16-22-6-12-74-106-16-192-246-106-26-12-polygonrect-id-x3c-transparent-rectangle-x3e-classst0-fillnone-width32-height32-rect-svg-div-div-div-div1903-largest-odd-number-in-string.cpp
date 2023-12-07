class Solution {
public:
// //     string largestOddNumber(string num) {
// //         for(int i=0; i< num.length(); i++){
// //             int cnt1 = 0;
// //             int cnt2 = 0;
// //             if(num[i] % 2 == 0){
// //                 cnt1 ++;
// //             }else{
// //                 cnt2 ++;
// //             }
// //             if(cnt1 > cnt2)
// //         }
// //     }
// // };

// class Solution {
// public:
//     string largestOddNumber(string num) {
//         int n = num.length();
//         int cnt1 = 0;
//         int cnt2 = 0;

//         // Iterate through the string
//         for (int i = 0; i < n; i++) {
//             if ((num[i] - '0') % 2 == 0) {
//                 cnt1++;
//             } else {
//                 cnt2++;
//             }
//         }

//         // Check if there are no odd digits
//         if (cnt2 == 0) {
//             return "";
//         }

//         // Iterate through the string from left to right
//         for (int i = 0; i < n; i++) {
//             if ((num[i] - '0') % 2 == 1) {
//                 return num.substr(i);
//             }
//         }

//         // Should not reach here
//         return "";
//     }
// };

string largestOddNumber(string num) {
    int n = num.size();
    for (int i = n - 1; i >= 0; --i) {
        if ((num[i] - '0') % 2 == 1) {
            return num.substr(0, i + 1);
        }
    }
    return "";
}
};
