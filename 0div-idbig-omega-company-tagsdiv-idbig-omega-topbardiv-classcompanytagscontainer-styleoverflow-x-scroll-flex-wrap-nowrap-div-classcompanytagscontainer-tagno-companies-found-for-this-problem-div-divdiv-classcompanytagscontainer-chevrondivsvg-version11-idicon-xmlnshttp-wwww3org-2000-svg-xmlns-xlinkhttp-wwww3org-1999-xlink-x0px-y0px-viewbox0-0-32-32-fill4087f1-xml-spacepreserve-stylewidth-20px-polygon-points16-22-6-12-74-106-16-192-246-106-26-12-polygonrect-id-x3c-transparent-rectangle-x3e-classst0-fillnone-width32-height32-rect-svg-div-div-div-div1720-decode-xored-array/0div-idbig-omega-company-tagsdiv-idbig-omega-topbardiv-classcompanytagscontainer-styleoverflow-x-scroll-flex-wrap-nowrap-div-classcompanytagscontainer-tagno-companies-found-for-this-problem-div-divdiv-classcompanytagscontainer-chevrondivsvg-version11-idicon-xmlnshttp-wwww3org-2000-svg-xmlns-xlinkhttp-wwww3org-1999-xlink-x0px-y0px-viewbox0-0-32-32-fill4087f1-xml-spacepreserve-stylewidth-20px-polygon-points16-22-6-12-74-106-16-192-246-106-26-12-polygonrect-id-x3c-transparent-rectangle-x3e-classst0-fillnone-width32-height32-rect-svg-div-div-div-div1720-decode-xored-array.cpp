// class Solution {
// public:
//     vector<int> decode(vector<int>& encoded, int first) {
//         vector<int> arr(encoded.size()+1 ,first);
//         arr[0] = first;
//         for(int i=1; i<=encoded.size()-1; i++){
//             arr[i] = encoded[i-1] ^ arr[i-1];
//         }
//         return arr;
//     }
// };
class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> arr(encoded.size() + 1, 0);
        arr[0] = first;
        for(int i = 1; i <= encoded.size(); i++) {
            arr[i] = encoded[i - 1] ^ arr[i - 1];
        }
        return arr;
    }
};
